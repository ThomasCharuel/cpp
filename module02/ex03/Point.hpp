/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:29:22 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 20:23:44 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point(void);
		Point(const Point& src);
		Point(float x, float y);
		~Point(void);

		Point& operator=(const Point& rhs);

		const Fixed getX(void) const;
		const Fixed getY(void) const;

	private:
		const Fixed x;
		const Fixed y;
};

std::ostream& operator<<(std::ostream& o, const Point& rhs);

#endif