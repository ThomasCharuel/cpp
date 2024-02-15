/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:26 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/15 15:14:34 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->_contactIndex = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void PhoneBook::addContact(void)
{
	std::string buffer;
	std::cout << "First Name >" << std::endl;
	std::cin >> buffer;
	this->_contacts[this->_contactIndex].setFirstName(buffer);
	std::cout << "Last Name >" << std::endl;
	std::cin >> buffer;
	this->_contacts[this->_contactIndex].setLastName(buffer);
	std::cout << "Nickname >" << std::endl;
	std::cin >> buffer;
	this->_contacts[this->_contactIndex].setNickname(buffer);
	std::cout << "Phone Number >" << std::endl;
	std::cin >> buffer;
	this->_contacts[this->_contactIndex].setPhoneNumber(buffer);
	std::cout << "Darkest Secret >" << std::endl;
	std::cin >> buffer;
	this->_contacts[this->_contactIndex].setDarkestSecret(buffer);
	std::cout << this->_contacts[this->_contactIndex].getFirstName() << " " << this->_contacts[this->_contactIndex].getLastName() << " has been added to your contacts !" << std::endl;
	++this->_contactIndex %= MAX_CONTACT;
}

void PhoneBook::displayContacts(void) const
{
}
