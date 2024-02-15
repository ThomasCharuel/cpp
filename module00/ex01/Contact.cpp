/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:18 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/15 15:10:57 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}
std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

void Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}
