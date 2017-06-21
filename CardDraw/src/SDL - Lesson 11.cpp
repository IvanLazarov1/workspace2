#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;
const int CARD_WIDTH = 113; //Shiro4ika
const int CARD_HEIGHT = 149; //Viso4ina
const int ALL_CARDS = 52;

static vector<SDL_Rect> cards;
static vector<SDL_Rect> fiveCards;
//The music that will be played
Mix_Music *gMusic = NULL;

class LTexture
{
	public:
		LTexture();
		~LTexture();

		bool loadFromFile( std::string path );
		void free();
		void render( int x, int y, SDL_Rect* clip = NULL );
		int getWidth();
		int getHeight();
		void setWidth(int);
		void setHeight(int);

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
SDL_Rect load;
LTexture gSpriteSheetTexture;
LTexture gBackground;
SDL_Texture* gTexture = NULL;
SDL_Texture* loadTexture( std::string path );

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

	if( !gSpriteSheetTexture.loadFromFile( "media/sample.png" ) )
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

	return success;
}

void close()
{
	gSpriteSheetTexture.free();
	gBackground.free();

	//Free the music
	Mix_FreeMusic( gMusic );
	gMusic = NULL;
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;
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

			int x = 0,y = 0;

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

						if (x > ((SCREEN_WIDTH /2) - (cards[ ALL_CARDS ].w/2)) && x < ((SCREEN_WIDTH /2) - (cards[ ALL_CARDS ].w/2) + cards[ ALL_CARDS ].w) &&
							y > ((SCREEN_HEIGHT /2) - (cards[ ALL_CARDS ].h/2)) && y < (SCREEN_HEIGHT /2) - (cards[ ALL_CARDS ].h/2) + cards[ ALL_CARDS ].h)
						{
							counter++;
						}

						if (counter >= 6)
						{
							counter = 0;
							getRandomCards();
						}

						else
						{
							Mix_PlayMusic( gMusic,0 );
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
				gSpriteSheetTexture.render( (SCREEN_WIDTH /2) - (cards[ ALL_CARDS ].w/2), (SCREEN_HEIGHT /2) - (cards[ ALL_CARDS ].h/2), &cards[ ALL_CARDS ] );

				for (size_t i = 0; i < counter; i++)
				{
					gSpriteSheetTexture.render( i * CARD_WIDTH + (SCREEN_WIDTH/5) + 25 , 0 + (SCREEN_HEIGHT/8), &fiveCards[ i ] );
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
	loadTexture("sample.png");
	load.x = 0;
	load.y = 0;
	load.w = CARD_WIDTH;
	load.h = CARD_HEIGHT;

	for (size_t i = 0; i < 6; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			cards.push_back(load);
			load.x += CARD_WIDTH -1;
		}
		load.x = 0;
		load.y += CARD_HEIGHT -1;
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
