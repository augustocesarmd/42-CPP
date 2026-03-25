/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 13:50:02 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/14 13:51:37 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon*     _weapon;

public:
    HumanB(std::string name);
    ~HumanB();

    void setWeapon(Weapon& weapon);
    void attack(void);
};

#endif
