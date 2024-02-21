/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:17:52 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/21 13:22:37 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl harl;

	switch (argc)
	{
	case 1:
		std::cout << "You forgot to pass an argument" << std::endl;
		break;
	case 2:
		harl.complain(argv[1]);
		break;
	default:
		std::cout << "Too many arguments. Pass only one." << std::endl;
		break;
	}

	return (0);
}
