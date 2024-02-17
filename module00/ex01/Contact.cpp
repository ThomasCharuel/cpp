/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:18 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/17 11:09:13 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void)
{
	this->_isVisible = false;
}

Contact::~Contact(void)
{
}

std::string Contact::getIndex(void) const
{
	return (this->_index);
}

void Contact::setIndex(std::string index)
{
	if (!this->_isVisible)
		this->_isVisible = true;
	this->_index = index;
}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

void Contact::setFirstName(std::string firstName)
{
	if (!this->_isVisible)
		this->_isVisible = true;
	this->_firstName = firstName;
}
std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

void Contact::setLastName(std::string lastName)
{
	if (!this->_isVisible)
		this->_isVisible = true;
	this->_lastName = lastName;
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

void Contact::setNickname(std::string nickname)
{
	if (!this->_isVisible)
		this->_isVisible = true;
	this->_nickname = nickname;
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	if (!this->_isVisible)
		this->_isVisible = true;
	this->_phoneNumber = phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	if (!this->_isVisible)
		this->_isVisible = true;
	this->_darkestSecret = darkestSecret;
}

void Contact::_displayCell(std::string content)
{
	std::string text;
	if (content.length() > COLUMN_WIDTH)
		text = content.substr(0, COLUMN_WIDTH - 1) + ".";
	else
		text = content;
	std::cout << std::setw(COLUMN_WIDTH) << text;
}

void Contact::displaySummary(void) const
{
	if (this->_isVisible)
	{
		Contact::_displayCell(this->_index);
		std::cout << "|";
		Contact::_displayCell(this->_firstName);
		std::cout << "|";
		Contact::_displayCell(this->_lastName);
		std::cout << "|";
		Contact::_displayCell(this->_nickname);
		std::cout << std::endl;
	}
}

bool Contact::displayDetails(void) const
{
	if (!this->_isVisible)
		return (false);

	std::cout << "first name: " << this->_firstName << std::endl;
	std::cout << "last name: " << this->_lastName << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "phone number: " << this->_phoneNumber << std::endl;
	std::cout << "darkest secret: " << this->_darkestSecret << std::endl;
	return (true);
}
