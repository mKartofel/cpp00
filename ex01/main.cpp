/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:50:43 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/07 12:57:28 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void displayCommands(void)
{
	std::cout << "Enter one of the following commands:" << std::endl;
	std::cout << "ADD - Add a new contact." << std::endl;
	std::cout << "SEARCH - Search for a specific contact." << std::endl;
	std::cout << "EXIT - End the program." << std::endl;
}

int main(void)
{
	PhoneBook phonebook;
	std::string command;

	displayCommands();
	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			return (0);
		std::cout << "Enter one of the authorized commands:" << std::endl;
	}
	return (0);
}