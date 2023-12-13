#include "Source.hpp"

int main(int argc, char* argv[])
{
	Engine* app = new Engine("TheFixins", 1280, 720);
	while (app->kActive)
	{
		app->HandleEvents();
	}
	delete app;
	return 1;
}