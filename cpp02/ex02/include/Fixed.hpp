/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:57:24 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/25 16:57:37 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed();

		// Operators overload
		Fixed	&operator=(const Fixed &other);

		// Comparison operators
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		// Arithmetic operators
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		// Increment / Decrement operators
		Fixed	&operator++();			// Prefix increment
		Fixed	operator++(int);		// Postfix increment
		Fixed	&operator--();			// Prefix decrement
		Fixed	operator--(int);		// Postfix decrement

		// Methods to convert Fixed to int or float
		int		toInt() const;
		float	toFloat() const;

		// Min / Max functions
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

		// Getters and Setters
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);