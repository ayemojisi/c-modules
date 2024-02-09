#include "PhoneBook.cpp"

#ifndef CONTACT_HPP_
# define CONTACT_HPP_

class Contact 
{
	public:
		Contact();
		~Contact();
	
	private:
		static const int FIELDS_CNT = 5;
		enum field
		{
			firstName = 0,
			lastname,
			nickname,
			phone,
			darkestSecret
		};
		int index;
		std::string fieldsInfo[FIELDS_CNT];
};

#endif