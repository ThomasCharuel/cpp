/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:06:28 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/19 15:40:04 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB(void);

		void attack(void) const;

		void setWeapon(Weapon& weapon);

	private:
		std::string _name;
		Weapon* _weapon;

};

#endif
