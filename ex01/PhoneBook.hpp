/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 09:59:48 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/08 18:42:28 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include "utils.hpp"
# define MAX_NB_CONTACT 8

class PhoneBook
{
private:
	Contact	_contacts[MAX_NB_CONTACT];
	int		_index;
	int		_nbContacts;
	
public:
	PhoneBook(void);
	~PhoneBook(void);
	void addContact(void);
	void searchContact(void) const;
};


#endif