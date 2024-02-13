/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:26 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/13 23:49:19 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
}

void PhoneBook::add_contact()
{
	std::cout << "First Name >" << std::endl;
	std::cin >> this->contacts[this->index].first_name;
	std::cout << "Last Name >" << std::endl;
	std::cin >> this->contacts[this->index].last_name;
	std::cout << "Nickname >" << std::endl;
	std::cin >> this->contacts[this->index].nickname;
	std::cout << "Phone Number >" << std::endl;
	std::cin >> this->contacts[this->index].phone_number;
	std::cout << "Darkest Secret >" << std::endl;
	std::cin >> this->contacts[this->index].darkest_secret;
	std::cout << this->contacts[this->index].first_name << " " << this->contacts[this->index].last_name << " has been added to your contacts !" << std::endl;
	++this->index %= MAX_CONTACT;
}
