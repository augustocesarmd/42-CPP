/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:49:33 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/14 14:12:42 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define NUM_ZOMBIES 5

int main(void) {
    std::cout << "--- Creating Horde of " << NUM_ZOMBIES << " zombies ---" << std::endl;
    Zombie* horde = zombieHorde(NUM_ZOMBIES, "HordeMember");

    if (horde == NULL) {
        std::cerr << "Allocation failed" << std::endl;
        return 1;
    }

    std::cout << "\n--- Announcing Horde ---" << std::endl;
    for (int i = 0; i < NUM_ZOMBIES; i++) {
        horde[i].announce();
    }

    std::cout << "\n--- Deleting Horde ---" << std::endl;
    delete [] horde;

    return 0;
}
