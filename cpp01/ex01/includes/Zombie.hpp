/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:49:28 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/14 13:51:55 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();

    void announce(void);
    void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
