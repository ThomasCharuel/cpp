/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:05:32 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 20:25:39 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(0, 0);
	Point b(20, 0);
	Point c(10, 30);

	Point point(10, 15);

	std::cout << "Point " << point << (bsp(a, b, c, point) ? " is " : " is not ") << "inside triangle" << std::endl;

	return (0);
}
