#include "stdafx.h"
#include "SDL_setup.h"


CSDL_setup::CSDL_setup()
{

	SDL_Init(SDL_INIT_EVERYTHING);

	sdlwindow = NULL;
	sdlwindow = SDL_CreateWindow("Title", 100, 100, 500, 500, SDL_WINDOW_SHOWN);
	if (sdlwindow == NULL) { SDL_Log("window not made"); }

	sdlrenderer = NULL;
	sdlrenderer = SDL_CreateRenderer(sdlwindow, -1, SDL_RENDERER_ACCELERATED);
	if (sdlrenderer == NULL) { SDL_Log("renderer not made"); }

	sdlevent = NULL;
	sdlevent = new SDL_Event();

	quit = false;


}


CSDL_setup::~CSDL_setup()
{
	SDL_DestroyWindow(sdlwindow);
	SDL_DestroyRenderer(sdlrenderer);
	delete sdlevent;
}
