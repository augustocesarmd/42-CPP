/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:57:09 by acesar-m          #+#    #+#             */
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
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed &other);
		~Fixed();

		Fixed	&operator=(const Fixed &other);

		float	toFloat() const;
		int		toInt() const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);