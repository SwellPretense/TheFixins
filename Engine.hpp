#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "Source.hpp"

class Engine
{
public:
	// Functions
	Engine(const char* kTitle, int kWidth, int kHeight);
	~Engine();
	void HandleEvents();
	void Disengage();

	// Variables
	const char* kTitle = "EngineProto";
	int kWidth = 1280, kHeight = 720;
	bool kActive = false;

	// SDL
	SDL_Window* kWindow = nullptr;
	SDL_Renderer* kRenderer = nullptr;
	SDL_Event kEvent;
private:
};

#endif // !ENGINE_HPP
