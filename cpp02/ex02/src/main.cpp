/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:57:32 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/25 16:57:33 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main(void)
{
	std::cout << std::boolalpha;

	Fixed a;
	Fixed b(42.42f);
	Fixed const c(10);
	Fixed const d(b);

	std::cout << "Initial state:" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "\nComparison operators:" << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;

	std::cout << "c == d: " << (c == d) << std::endl;
	std::cout << "c != d: " << (c != d) << std::endl;
	std::cout << "c > d: " << (c > d) << std::endl;
	std::cout << "c < d: " << (c < d) << std::endl;
	std::cout << "c >= d: " << (c >= d) << std::endl;
	std::cout << "c <= d: " << (c <= d) << std::endl;

	std::cout << "\nArithmetic operators:" << std::endl;
	std::cout << "b: " << b << ", c: " << c << std::endl;
	std::cout << "b + c: " << (b + c) << std::endl;
	std::cout << "b - c: " << (b - c) << std::endl;
	std::cout << "b * c: " << (b * c) << std::endl;
	std::cout << "b / c: " << (b / c) << std::endl;

	std::cout << "\nIncrement / Decrement operators:" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "b: " << b << std::endl;
	std::cout << "--b: " << --b << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "b--: " << b-- << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "\nMin / Max functions:" << std::endl;
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "Min: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max: " << Fixed::max(a, b) << std::endl;

	return (0);
}