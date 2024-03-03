/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:29:07 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 22:21:13 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed abs(Fixed number)
{
	if (number < 0)
		return (number * Fixed(-1));
	return (number);
}

Fixed get_triangle_area(Point const a, Point const b, Point const c)
{
	Fixed area;

	area = (a.getX() * (b.getY() - c.getY()) 
		+ b.getX() * (c.getY() - a.getY()) 
		+ c.getX() * (a.getY() - b.getY())) / 2;
	return (abs(area));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed triangle_area = get_triangle_area(a, b, c);
	Fixed sub_triangle_1_area = get_triangle_area(point, b, c);
	Fixed sub_triangle_2_area = get_triangle_area(a, point, c);
	Fixed sub_triangle_3_area = get_triangle_area(a, b, point);
	
	return (triangle_area == sub_triangle_1_area + sub_triangle_2_area + sub_triangle_3_area);
}
