/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:17:52 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/19 10:10:13 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int horde_size = 3;
	Zombie *horde = zombieHorde(horde_size, "horde");

	for (int i = 0; i < horde_size; i++) {
		horde[i].announce();
	}

	delete [] horde;

	return (0);
}
