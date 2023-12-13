#ifndef DEBUG_HPP
#define DEBUG_HPP
#include "Source.hpp"

class Debug
{
public:
	class Log
	{
	public:
		static void Notify(const char* msg) // 0
		{
			std::cout << Colors::Console::BLUE << "-[LOG]- " << Colors::Console::RESET << msg << "\n";
		}
		static void Warn(const char* msg)   // 1
		{
			std::cout << Colors::Console::YELLOW << "-[WARNING]- " << Colors::Console::RESET << msg << "\n";
		}
		static void Alert(const char* msg) // 2
		{
			std::cout << Colors::Console::RED << "-[ERROR]- " << Colors::Console::RESET << msg << "\n";
		}
	};
};

#endif // !DEBUG_HPP
