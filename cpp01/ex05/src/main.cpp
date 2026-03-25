/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:51:13 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/14 13:51:14 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "TESTING DEBUG:" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\nTESTING INFO:" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\nTESTING WARNING:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\nTESTING ERROR:" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "\nTESTING INVALID:" << std::endl;
    harl.complain("INVALID"); // Should do nothing

    return 0;
}
