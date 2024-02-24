/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:05:36 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 14:55:37 by tcharuel         ###   ########.fr       */
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

		bool operator>(const Fixed& rhs);
		bool operator<(const Fixed& rhs);
		bool operator>=(const Fixed& rhs);
		bool operator<=(const Fixed& rhs);
		bool operator==(const Fixed& rhs);
		bool operator!=(const Fixed& rhs);

		Fixed& operator+(const Fixed& rhs);
		Fixed& operator-(const Fixed& rhs);
		Fixed& operator*(const Fixed& rhs);
		Fixed& operator/(const Fixed& rhs);

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& lhs, Fixed& rhs);
		static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
		static Fixed& max(Fixed& lhs, Fixed& rhs);
		static const Fixed& max(const Fixed& lhs, const Fixed& rhs);

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
