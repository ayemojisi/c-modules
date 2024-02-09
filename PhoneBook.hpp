#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

#include <iostream>

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
		void search();
	private:
	static const int max_player = 8;
	int endplayerindex;
	int playerlen;
	Contact *contacts[max_player];
};

#endif