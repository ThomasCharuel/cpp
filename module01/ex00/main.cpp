/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:17:52 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/18 23:45:47 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heap_zombie;

	randomChump("StackZombie");
	heap_zombie = newZombie("HeadZombie");
	heap_zombie->announce();
	delete heap_zombie;

	return (0);
}
