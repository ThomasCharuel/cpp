/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:05:34 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 17:41:42 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(void): _rawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << Fixed::_fractional_bits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_rawBits = (int)roundf(value * (1 << Fixed::_fractional_bits));
}

Fixed::Fixed(const Fixed& src): _rawBits(src._rawBits)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& rhs)
{
	return (this->_rawBits > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed& rhs){
	return (this->_rawBits < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed& rhs){
	return (this->_rawBits >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed& rhs){
	return (this->_rawBits <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed& rhs){
	return (this->_rawBits == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs){
	return (this->_rawBits != rhs.getRawBits());
}


Fixed Fixed::operator+(const Fixed& rhs){
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs){
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs){
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs){
	return Fixed(this->toFloat() / rhs.toFloat());
}


Fixed& Fixed::operator++(){
	this->_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	this->_rawBits++;
	return tmp;
}

Fixed& Fixed::operator--(){
	this->_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	this->_rawBits--;
	return tmp;
}


Fixed& Fixed::min(Fixed& lhs, Fixed& rhs){
	if (lhs <= rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs){
	if ((Fixed&)lhs <= rhs)
		return (lhs);
	return (rhs);
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs){
	if (lhs >= rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs){
	if ((Fixed&)lhs >= rhs)
		return (lhs);
	return (rhs);
}


int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

int Fixed::toInt(void) const {
	return this->_rawBits >> Fixed::_fractional_bits;
}

float Fixed::toFloat(void) const {
	return ((float)this->_rawBits / (float)(1 << Fixed::_fractional_bits));
}

std::ostream& operator<<(std::ostream& o, const Fixed& rhs) {
	o << rhs.toFloat();
	return o;
}
