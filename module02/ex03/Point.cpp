/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:29:13 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 20:25:41 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0)
{
}

Point::Point(const Point& src): x(src.x), y(src.y)
{
}

Point::Point(float x, float y): x(x), y(y)
{
}

Point::~Point(void)
{
}

Point& Point::operator=(const Point& rhs)
{
	(Fixed) this->x = rhs.x;
	(Fixed) this->y = rhs.y;
	return *this;
}

const Fixed Point::getX(void) const
{
	return this->x;
}

const Fixed Point::getY(void) const
{
	return this->y;
}

std::ostream& operator<<(std::ostream& o, const Point& rhs) {
	o << "( " << rhs.getX() << ", " << rhs.getY() << ")";
	return o;
}

