#include <iostream>
#include <string>
#include <signal.h>
#include <limits>
#include "PhoneBook.hpp"

int main()
{
	std::string line;
	PhoneBook *phoneBook = new PhoneBook();

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|---------------WelCOME BRO-----------------|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while(std::cout << "PHONE <3 :", std::getline(std::cin, line))
	{
		if(line == "SEARCH" ) 
		{
			phoneBook->
		}
	}
	delete phoneBook;
}