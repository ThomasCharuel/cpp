/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:29:13 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 17:51:39 by tcharuel         ###   ########.fr       */
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
