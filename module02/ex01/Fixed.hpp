/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:05:36 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/22 22:34:05 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& src);
		~Fixed(void);

		Fixed& operator=(const Fixed& rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		int toInt(void) const;
		float toFloat(void) const;

	private:
		int _rawBits;
		static const int _fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif
