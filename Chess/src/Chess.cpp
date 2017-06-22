/*

 	 Tva trea da e shah uj !

 */

#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

const int SCREEN_WIDTH = 624;
const int SCREEN_HEIGHT = 624;

const int FIGURE_HEIGHT = 64;
const int FIGURE_WIDTH = 64;

using namespace std;

static vector<SDL_Rect> vFigures;

enum
{
	BLACK_KING,
	BLACK_QUEEN,
	BLACK_TOP,
	BLACK_HORSE,
	BLACK_OFFICER,
	BLACK_POWN,
	WHITE_KING,
	WHITE_QUEEN,
	WHITE_TOP,
	WHITE_HORSE,
	WHITE_OFFICER,
	WHITE_POWN,
};
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
void pushInVector();

SDL_Window* gWindow = NULL;
SDL_Renderer* gRenderer = NULL;
SDL_Rect rec;
LTexture gFigures;
LTexture gBackground;

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

void LTexture::setWidth(int width)
{
	mWidth = width;
}

void LTexture::setHeight(int height)
{
	mHeight = height;
}

bool init()
{
	bool success = true;

	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
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

		gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
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
			}
		}
	}

	return success;
}

bool loadMedia()
{
	bool success = true;

	if ( !gBackground.loadFromFile( "background.gif" ) )
	{
		printf( "Failed to load background" );
	}

	if( !gFigures.loadFromFile( "figures.png" ) )
	{
		printf( "Failed to load sprite sheet texture!\n" );
		success = false;
	}
	else
	{
		pushInVector();
	}

	return success;
}

void close()
{
	gFigures.free();
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;
	IMG_Quit();
	SDL_Quit();
}

int main( int argc, char* args[] )
{
	if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
		if( !loadMedia() )
		{
			printf( "Failed to load media!\n" );
		}
		else
		{
			bool quit = false;
			SDL_Event e;
			while( !quit )
			{
				while( SDL_PollEvent( &e ) != 0 )
				{
					if( e.type == SDL_QUIT )
					{
						quit = true;
					}
				}

				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
				SDL_RenderClear( gRenderer );

				gBackground.render( 0, 0, NULL );

				for (size_t i = 0; i < vFigures.size(); i++)
				{
					// Black figures
					gFigures.render( 40, 10, &vFigures.at( BLACK_TOP ) );
					gFigures.render( 110, 10, &vFigures.at( BLACK_OFFICER ) );
					gFigures.render( 180, 10, &vFigures.at( BLACK_HORSE ) );
					gFigures.render( 255, 10, &vFigures.at( BLACK_QUEEN ) );
					gFigures.render( 330, 10, &vFigures.at( BLACK_KING ) );
					gFigures.render( 400, 10, &vFigures.at( BLACK_OFFICER ) );
					gFigures.render( 470, 10, &vFigures.at( BLACK_HORSE ) );
					gFigures.render( 550, 10, &vFigures.at( BLACK_TOP ) );
					// Black powns
					gFigures.render( 40, 90, &vFigures.at( BLACK_POWN ) );
					gFigures.render( 110, 90, &vFigures.at( BLACK_POWN ) );
					gFigures.render( 180, 90, &vFigures.at( BLACK_POWN ) );
					gFigures.render( 255, 90, &vFigures.at( BLACK_POWN ) );
					gFigures.render( 330, 90, &vFigures.at( BLACK_POWN ) );
					gFigures.render( 400, 90, &vFigures.at( BLACK_POWN ) );
					gFigures.render( 470, 90, &vFigures.at( BLACK_POWN ) );
					gFigures.render( 550, 90, &vFigures.at( BLACK_POWN ) );
					// White figures
					gFigures.render( 40, 515, &vFigures.at( WHITE_TOP ) );
					gFigures.render( 110, 515, &vFigures.at( WHITE_OFFICER ) );
					gFigures.render( 180, 515, &vFigures.at( WHITE_HORSE ) );
					gFigures.render( 255, 515, &vFigures.at( WHITE_KING ) );
					gFigures.render( 330, 515, &vFigures.at( WHITE_QUEEN ) );
					gFigures.render( 400, 515, &vFigures.at( WHITE_HORSE ) );
					gFigures.render( 470, 515, &vFigures.at( WHITE_OFFICER ) );
					gFigures.render( 545, 515, &vFigures.at( WHITE_TOP ) );
					// White powns
					gFigures.render( 40, 445, &vFigures.at( WHITE_POWN ) );
					gFigures.render( 110, 445, &vFigures.at( WHITE_POWN ) );
					gFigures.render( 180, 445, &vFigures.at( WHITE_POWN ) );
					gFigures.render( 255, 445, &vFigures.at( WHITE_POWN ) );
					gFigures.render( 330, 445, &vFigures.at( WHITE_POWN ) );
					gFigures.render( 400, 445, &vFigures.at( WHITE_POWN ) );
					gFigures.render( 470, 445, &vFigures.at( WHITE_POWN ) );
					gFigures.render( 545, 445, &vFigures.at( WHITE_POWN ) );
				}

				SDL_RenderPresent( gRenderer );
			}
		}
	}

	close();

	return 0;
}

void pushInVector()
{
	if ( !gFigures.loadFromFile( "figures.png" ) )
	{
		printf("Failed to load figures");
	}
	else
	{
		rec.x = 0;
		rec.y = 0;
		rec.w = FIGURE_WIDTH;
		rec.h = FIGURE_HEIGHT;

		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < 6; j++)
			{
				vFigures.push_back(rec);
				rec.x += FIGURE_WIDTH -1;
			}
			rec.x = 0;
			rec.y += FIGURE_HEIGHT -1;
		}
	}
}

