#pragma once
class CSDL_setup
{
public:
	CSDL_setup();
	~CSDL_setup();

	SDL_Event *get_event() { return sdlevent; }
	SDL_Renderer *get_renderer() { return sdlrenderer; }
	SDL_Window *get_window() { return sdlwindow; }

	bool get_quit() { return quit; }
	void set_quit(bool b) { quit = b; }

	void f_poll() { SDL_PollEvent(sdlevent); }
	void f_renderclear() { SDL_RenderClear(sdlrenderer); }
	void f_renderpresent() { SDL_RenderPresent(sdlrenderer); }

private:
	SDL_Event *sdlevent;
	SDL_Renderer *sdlrenderer;
	SDL_Window *sdlwindow;

	bool quit;
};

