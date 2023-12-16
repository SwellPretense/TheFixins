#include "Source.hpp"

Engine::Engine(const char* kTitle, int kWidth, int kHeight)
{
	Debug::Log::Notify("Game Started");
	// Load SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) 
	{ 
		kWindow = SDL_CreateWindow(kTitle, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			kWidth, kHeight, kFlags);
		kRenderer = SDL_CreateRenderer(kWindow, -1, 0);
		if (!kWindow || !kRenderer){ kActive = false; }
		else { kActive = true; }
	}
	
}

Engine::~Engine()
{
	Debug::Log::Notify("Game Closed");
	// Close SDL
	SDL_Quit();
}

void Engine::HandleEvents()
{
	// Poll SDL Events
	SDL_PollEvent(&kEvent);
	switch (kEvent.type)
	{
	case SDL_QUIT:
		kActive = false;
		break;
	default:
		break;
	}
}

void Engine::Disengage()
{
	// Unload
	if (kWindow != NULL) { SDL_DestroyWindow(kWindow); kWindow = nullptr; }
	if (kRenderer != NULL) { SDL_DestroyRenderer(kRenderer); kRenderer = nullptr; }
}