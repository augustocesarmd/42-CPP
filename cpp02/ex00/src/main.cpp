/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:57:03 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/25 16:57:37 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main(void)
{
	std::cout << "-- DEFAULT CONSTRUCTOR --" << std::endl;
	Fixed a;

	std::cout << "\n -- COPY CONSTRUCTOR --" << std::endl;
	Fixed b(a);

	std::cout << "\n -- DEFAULT CONSTRUCTOR + ASSIGNMENT OPERATOR --" << std::endl;
	Fixed c;
	c = b;

	std::cout << "\n -- GET RAW BITS --" << std::endl;
	std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;
	std::cout << "b.getRawBits(): " << b.getRawBits() << std::endl;
	std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl;

	std::cout << "\n -- SET RAW BITS --" << std::endl;
	a.setRawBits(42);
	b.setRawBits(84);
	c.setRawBits(168);

	std::cout << "\n -- GET RAW BITS AFTER SETTING NEW VALUES --" << std::endl;
	std::cout << "a.getRawBits(): " << a.getRawBits() << std::endl;
	std::cout << "b.getRawBits(): " << b.getRawBits() << std::endl;
	std::cout << "c.getRawBits(): " << c.getRawBits() << std::endl;

	std::cout << "\n -- DESTRUCTORS --" << std::endl;

	return (0);
}