/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:10 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 19:05:11 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook;

	std::string command;
	do
	{
		std::cout << "Enter Instruction (ADD, SEARCH, EXIT) >" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
		{
			phonebook.displayContacts();
			phonebook.searchContact();
		}
		else if (command == "EXIT")
			break ;
		else if (!std::cin.eof())
			std::cout << "Unknown Command !" << std::endl;
	} while (!std::cin.eof());
	return (0);
}
