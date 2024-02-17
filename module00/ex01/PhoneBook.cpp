/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:26 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/17 11:14:54 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook(void)
{
	this->_contactIndex = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::addContact(void)
{
	Contact	*contact;

	std::ostringstream oss;
	contact = &this->_contacts[this->_contactIndex];
	oss << this->_contactIndex;
	contact->setIndex(oss.str());
	std::string buffer;
	std::cout << "First Name >" << std::endl;
	std::cin >> buffer;
	contact->setFirstName(buffer);
	std::cout << "Last Name >" << std::endl;
	std::cin >> buffer;
	contact->setLastName(buffer);
	std::cout << "Nickname >" << std::endl;
	std::cin >> buffer;
	contact->setNickname(buffer);
	std::cout << "Phone Number >" << std::endl;
	std::cin >> buffer;
	contact->setPhoneNumber(buffer);
	std::cout << "Darkest Secret >" << std::endl;
	std::cin >> buffer;
	contact->setDarkestSecret(buffer);
	std::cout << contact->getFirstName() << " " << contact->getLastName() << " has been added to your contacts !" << std::endl;
	++this->_contactIndex %= MAX_CONTACT;
}

void PhoneBook::displayContacts(void) const
{
	size_t i;

	std::cout << std::setw(10) << "index"
				<< "|";
	std::cout << std::setw(10) << "first name"
				<< "|";
	std::cout << std::setw(10) << "last name"
				<< "|";
	std::cout << std::setw(10) << "nickname" << std::endl;

	i = 0;
	while (i < MAX_CONTACT)
		this->_contacts[(this->_contactIndex + (i++))
			% MAX_CONTACT].displaySummary();
}

void PhoneBook::searchContact(void) const
{
	int index;
	std::cout << "Enter entry's index >" << std::endl;
	if (!(std::cin >> index))
	{
		std::cout << "Invalid input. Please enter a number between 0 and " << MAX_CONTACT
			- 1 << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	if (index < 0 || index >= MAX_CONTACT
		|| !this->_contacts[index].displayDetails())
		std::cout << "No entry for index: " << index << std::endl;
}
