#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;
const int CARD_WIDTH = 113;		// Shiro4ina
const int CARD_HEIGHT = 149;	// Viso4ina
const int ALL_CARDS = 52;

static vector<SDL_Rect> cards;
static vector<SDL_Rect> fiveCards;

Mix_Music* gMusic = NULL;
TTF_Font* gFont = NULL;

class LTexture
{
	public:
		LTexture();
		~LTexture();

		bool loadFromFile( std::string path );
		bool loadFromRenderedText( std::string textureText, SDL_Color textColor );

		void free();
		void render( int x, int y, SDL_Rect* clip = NULL );
		int getWidth();
		int getHeight();
		void setWidth(int);
		void setHeight(int);
		void setColor( Uint8 red, Uint8 green, Uint8 blue );

	private:

		SDL_Texture* mTexture;
		int mWidth;
		int mHeight;
};

bool init();
bool loadMedia();
void close();
void pushCards();
void getRandomCards();

SDL_Window* gWindow = NULL;
SDL_Renderer* gRenderer = NULL;
SDL_Rect rect;
LTexture gCards;
LTexture gBackground;
SDL_Texture* gTexture = NULL;
SDL_Texture* loadTexture( std::string path );
LTexture gText;

LTexture::LTexture()
{
	mTexture = NULL;
	mWidth = 0;
	mHeight = 0;
}

LTexture::~LTexture()
{
	free();
}

bool LTexture::loadFromFile( std::string path )
{
	free();

	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );

	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0, 0xFF, 0xFF ) );
		newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );

		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}
		else
			{
				mWidth = loadedSurface->w;
				mHeight = loadedSurface->h;
			}
		SDL_FreeSurface( loadedSurface );
	}
	mTexture = newTexture;
	return mTexture != NULL;
}

bool LTexture::loadFromRenderedText( std::string textureText, SDL_Color textColor )
{
	//Get rid of preexisting texture
		free();

		//Render text surface
		SDL_Surface* textSurface = TTF_RenderText_Solid( gFont, textureText.c_str(), textColor );
		if( textSurface == NULL )
		{
			printf( "Unable to render text surface! SDL_ttf Error: %s\n", TTF_GetError() );
		}
		else
		{
			//Create texture from surface pixels
	        mTexture = SDL_CreateTextureFromSurface( gRenderer, textSurface );
			if( mTexture == NULL )
			{
				printf( "Unable to create texture from rendered text! SDL Error: %s\n", SDL_GetError() );
			}
			else
			{
				//Get image dimensions
				mWidth = textSurface->w;
				mHeight = textSurface->h;
			}

			//Get rid of old surface
			SDL_FreeSurface( textSurface );
		}

		//Return success
		return mTexture != NULL;
}

void LTexture::free()
{
	if( mTexture != NULL )
	{
		SDL_DestroyTexture( mTexture );
		mTexture = NULL;
		mWidth = 0;
		mHeight = 0;
	}
}

void LTexture::render( int x, int y, SDL_Rect* clip )
{
	SDL_Rect renderQuad = { x, y, mWidth, mHeight };

	if( clip != NULL )
	{
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}

	SDL_RenderCopy( gRenderer, mTexture, clip, &renderQuad );
}

int LTexture::getWidth()
{
	return mWidth;
}

int LTexture::getHeight()
{
	return mHeight;
}
void LTexture::setWidth(int mWidth)
{
    this->mWidth += mWidth;
}

void LTexture::setHeight(int mHeight)
{
    this->mHeight += mHeight;
}
void LTexture::setColor( Uint8 red, Uint8 green, Uint8 blue )
{
	//Modulate texture rgb
	SDL_SetTextureColorMod( mTexture, red, green, blue );
}
bool init()
{
	bool success = true;

	if( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		success = false;
	}
	else
	{
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

		gWindow = SDL_CreateWindow( "Poker 6oker", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( gWindow == NULL )
		{
			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
			success = false;
		}
		else
			{
				gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
				if( gRenderer == NULL )
				{
					printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
					success = false;
				}
				else
					{
						SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
						int imgFlags = IMG_INIT_PNG;
						if( !( IMG_Init( imgFlags ) & imgFlags ) )
						{
							printf( "SDL_image could not initialize! SDL_mage Error: %s\n", IMG_GetError() );
							success = false;
						}

						 //Initialize SDL_mixer
						if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
						{
							printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
							success = false;
						}

						//Initialize SDL_ttf
						if( TTF_Init() == -1 )
						{
							printf( "SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError() );
							success = false;
						}
					}
			}
	}

	return success;
}

bool loadMedia()
{
	bool success = true;

	if( !gBackground.loadFromFile( "media/background.png" ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}

	if( !gCards.loadFromFile( "media/sample.png" ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}

	//Load music
	gMusic = Mix_LoadMUS( "media/cardFlip.wav" );
	if( gMusic == NULL )
	{
		printf( "Failed to load beat music! SDL_mixer Error: %s\n", Mix_GetError() );
		success = false;
	}

	else
		{
			pushCards();
			srand(time(0));
			getRandomCards();
		}
	//Open the font
	gFont = TTF_OpenFont( "media/Arcanum.ttf", 28 );
	if( gFont == NULL )
	{
		printf( "Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError() );
		success = false;
	}
	else
		{
			//Render text
			SDL_Color textColor = { 242, 66, 48 };
			if( !gText.loadFromRenderedText( "Five cards draw", textColor ) )
			{
				printf( "Failed to render text texture!\n" );
				success = false;
			}
		}
	return success;
}

void close()
{
	gCards.free();
	gBackground.free();
	gText.free();

	//Free global font
	TTF_CloseFont( gFont );
	gFont = NULL;
	//Free the music
	Mix_FreeMusic( gMusic );
	gMusic = NULL;
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;
	TTF_Quit();
	Mix_Quit();
	IMG_Quit();
	SDL_Quit();
}

SDL_Texture* loadTexture( std::string path )
{
	SDL_Texture* newTexture = NULL;
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );

	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
		{
        	newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );

        	if( newTexture == NULL )
        	{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
        	}

        	SDL_FreeSurface( loadedSurface );
		}

	return newTexture;
}
int main( int argc, char* args[] )
{
	//Start up SDL and create window
	if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
		//Load media
		if( !loadMedia() )
		{
			printf( "Failed to load media!\n" );
		}
		else
		{

			//Main loop flag
			bool quit = false;

			//Event handler
			SDL_Event e;

			int x = 0, y = 0;

			unsigned counter = 0;

			//While application is running
			while( !quit )
			{
				//Handle events on queue
				while( SDL_PollEvent( &e ) != 0 )
				{
					if (e.type == SDL_MOUSEBUTTONDOWN)
					{
						SDL_GetMouseState(&x, &y);

						if (x > ((SCREEN_WIDTH / 2) - (cards[ ALL_CARDS ].w / 2 )) && x < ((SCREEN_WIDTH / 2 ) - (cards[ ALL_CARDS ].w / 2) + cards[ ALL_CARDS ].w) &&
							y > ((SCREEN_HEIGHT / 2) - (cards[ ALL_CARDS ].h/ 2 )) && y < (SCREEN_HEIGHT / 2 ) - (cards[ ALL_CARDS ].h / 2) + cards[ ALL_CARDS ].h)
						{
							counter++;
							Mix_PlayMusic( gMusic, 0 );
						}

						if (counter >= 6)
						{
							counter = 0;
							getRandomCards();
							Mix_PauseMusic();
						}
					}

					//User requests quit
					if( e.type == SDL_QUIT )
					{
						quit = true;
					}
				}

				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
				SDL_RenderClear( gRenderer );

				gBackground.render(0,0,NULL);
				gText.render( ( SCREEN_WIDTH - gText.getWidth() ) / 2, ( SCREEN_HEIGHT - gText.getHeight() ) / 15 );
				gCards.render( (SCREEN_WIDTH /2) - (cards[ ALL_CARDS ].w / 2), (SCREEN_HEIGHT / 2) - (cards[ ALL_CARDS ].h / 2), &cards[ ALL_CARDS ] );

				for (size_t i = 0; i < counter; i++)
				{
					gCards.render( i * CARD_WIDTH + (SCREEN_WIDTH / 5) + 25 , 0 + (SCREEN_HEIGHT / 8), &fiveCards[ i ] );
				}

				SDL_RenderPresent( gRenderer );
			}

		}
	}

	//Free resources and close SDL
	close();

	return 0;
}

void pushCards()
{
	if ( !gCards.loadFromFile("media/sample.png") )
	{

	}
	else
	{
		rect.x = 0;
		rect.y = 0;
		rect.w = CARD_WIDTH;
		rect.h = CARD_HEIGHT;

		for (size_t i = 0; i < 6; i++)
		{
			for (size_t j = 0; j < 9; j++)
			{
				cards.push_back(rect);
				rect.x += CARD_WIDTH -1;
			}
			rect.x = 0;
			rect.y += CARD_HEIGHT -1;
		}
	}
}
void getRandomCards()
{
	fiveCards.clear();

	for (size_t i = 0; i < 5; i++)
	{
		fiveCards.push_back(cards.at( rand() % (ALL_CARDS - 1) ));
	}
}
