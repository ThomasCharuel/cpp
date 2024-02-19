/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:06:42 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/19 14:25:03 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string& getType(void) const;
		void setType(std::string type);

	private:
		std::string _type;
};

#endif
