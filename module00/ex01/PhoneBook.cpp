/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:26 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/13 23:53:40 by tcharuel         ###   ########.fr       */
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
	std::cout << "First Name >" << std::endl;
	std::cin >> this->_contacts[this->_contactIndex].first_name;
	std::cout << "Last Name >" << std::endl;
	std::cin >> this->_contacts[this->_contactIndex].last_name;
	std::cout << "Nickname >" << std::endl;
	std::cin >> this->_contacts[this->_contactIndex].nickname;
	std::cout << "Phone Number >" << std::endl;
	std::cin >> this->_contacts[this->_contactIndex].phone_number;
	std::cout << "Darkest Secret >" << std::endl;
	std::cin >> this->_contacts[this->_contactIndex].darkest_secret;
	std::cout << this->_contacts[this->_contactIndex].first_name << " " << this->contacts[this->index].last_name << " has been added to your contacts !" << std::endl;
	++this->_contactIndex %= MAX_CONTACT;
}
