#include "PhoneBook.hpp"

#include <iostream>
#include <sstream>

void PhoneBook::search()
{
	std::cout << "\n";
	if(this->playerlen == 0)
	{
		std::cout << "ERROR Player GO TO FRİENDS\n" << std::endl;
		return;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|-----Index|First Name|-Last Name|--Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for(int i = 0; i < this->playerlen; i++);
		this->contacts[i]->
}