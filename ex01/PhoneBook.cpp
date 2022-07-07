/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:14:20 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/07 16:39:21 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_index = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::addContact(void)
{
	_index++;
	if (_index >= MAX_NB_CONTACT)
		_index = 0;
	_contacts[_index].fillContactInfos();
}

void PhoneBook::searchContact(void)
{
	std::string	indexStr;
	int			indexInt;
	
	if (_index == -1)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return ;
	}
	
	//display all contacts infos
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i <= _index; i++)
	{
		std::cout << std::setw(10) << i << "|"; //display current index
		_contacts[i].displayShortContactInfo();
	}
	
	//prompt user for index to search
	indexInt = -1;
	while (indexInt < 0 || indexInt > _index)
	{
		std::cout << "Enter the index of the contact to display: ";
		std::getline(std::cin, indexStr);
		if (!arg_is_int(indexStr))
			std::cout << "You must type in an integer." << std::endl;
		else
			indexInt = ft_atoi(indexStr);
	}
	_contacts[indexInt].displayFullContactInfo();
}