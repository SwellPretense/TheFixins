#ifndef ENGINE_HPP
#define ENGINE_HPP
#include "Source.hpp"

class Engine
{
public:
	Engine(const char* kTitle, int kWidth, int kHeight);
	~Engine();
	void HandleEvents();

	const char* kTitle;
	int kWidth, kHeight;
	bool kActive = true;
private:
};

#endif // !ENGINE_HPP
