#include "Source.hpp"

Engine::Engine(const char* kTitle, int kWidth, int kHeight)
{
	Debug::Log::Notify("Game Started");
	// Load SDL
}

Engine::~Engine()
{
	Debug::Log::Notify("Game Closed");
	// Close SDL
}

void Engine::HandleEvents()
{
	// Poll SDL Events
}