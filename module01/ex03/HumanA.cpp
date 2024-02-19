/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:06:04 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/19 14:41:25 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
