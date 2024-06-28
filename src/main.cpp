#include <iostream>
#include <string>
#include "parser.h"

#ifdef _WIN32
std::string buff;

std::string readline(const char *output)
{
	std::cout << output;
	getline(std::cin, buff);
    
	return buff;
}

void add_history(const char *buffer)
{

}
#else
#include <editline/readline.h>
#endif

int main()
{
	std::cout << "lispV v0.0.1 REPL edition\n"
			  << "ctrl+c to exit\n"
			  << "--------------------\n";

	parser::createParser();

	std::string buff;
    while(true)
    {
		buff = readline("[lispV]$ ");
		add_history(buff.c_str());

		parser::tryParse(buff.c_str());

        std::cout << "youre input was: " << buff << std::endl;
    }

	parser::cleanParser();
}