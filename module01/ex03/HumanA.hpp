/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:06:07 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/19 14:40:38 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void attack(void) const;

	private:
		std::string _name;
		Weapon& _weapon;
};

#endif
