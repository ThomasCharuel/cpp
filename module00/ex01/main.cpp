/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:10 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/13 23:46:39 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook;

	std::string command;
	while (true)
	{
		std::cout << "Enter Instruction (ADD, SEARCH, EXIT) >" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
		{
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Unknown Command !" << std::endl;
	}
	return (0);
}
