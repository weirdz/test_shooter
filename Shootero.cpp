// Shootero.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SDL_setup.h"


int main()
{
	CSDL_setup *sdlsetup = new CSDL_setup();

	while (!sdlsetup->get_quit() && sdlsetup->get_event()->type != SDL_QUIT)
	{
		sdlsetup->f_poll();
		sdlsetup->f_renderclear();

		sdlsetup->f_renderpresent();
	}
    return 0;
}

