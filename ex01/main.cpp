/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <iergun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:55:32 by iergun            #+#    #+#             */
/*   Updated: 2024/02/07 19:40:13 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <iostream>
#include <string>
#include <csignal>
#include <climits>

int main() {
	std::string line;
	PhoneBook *phoneBook = new PhoneBook();

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|---------------WELCOME BRO-----------------|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (std::cout << "$> ", std::getline(std::cin, line)) {
		if (line == "SEARCH") {
			phoneBook->searchContact();
		} else if (line == "ADD") {
			phoneBook->addContact();
		} else if (line == "EXIT") {
			std::cout << "exit" << std::endl;
			break;
		} else if (std::cin.eof()) {
			break;
		}
		std::cin.clear();
	}
	std::cin.clear();

	delete phoneBook;
	return 0;
}
