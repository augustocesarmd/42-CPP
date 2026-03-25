/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:49:47 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/14 13:51:43 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "--- Memory Addresses ---" << std::endl;
    std::cout << "Address of string variable: " << &str << std::endl;
    std::cout << "Address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Address held by stringREF : " << &stringREF << std::endl;

    std::cout << "\n--- Values ---" << std::endl;
    std::cout << "Value of string variable  : " << str << std::endl;
    std::cout << "Value pointed to by PTR   : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by REF   : " << stringREF << std::endl;

    return 0;
}
