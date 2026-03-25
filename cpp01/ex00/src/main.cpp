/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:49:01 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/14 13:52:03 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    std::cout << "--- Stack allocation (randomChump) ---" << std::endl;
    randomChump("StackZombie");

    std::cout << "\n--- Heap allocation (newZombie) ---" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    return 0;
}
