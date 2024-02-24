/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 08:40:57 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 09:04:32 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Sed sed;
	if (argc == 4)
	{
		sed = Sed(argv[1], argv[2], argv[3]);
		if (sed.init_check())
			sed.run();
	}
	else
		std::cout << "Bad number of arguments: expecting 3" << std::endl;

	return (0);
}
