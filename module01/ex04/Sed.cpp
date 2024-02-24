/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:35:15 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 19:38:45 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>
#include <fstream>

Sed::Sed()
{
}

Sed::Sed(std::string infile, std::string old_str, std::string new_str): _infile(infile), _old_str(old_str), _new_str(new_str)
{
	this->_outfile = infile + ".replace";
}

Sed::~Sed()
{
}

bool Sed::init_and_check(void) const
{
	if (this->_infile.empty())
	{
		std::cout << "Bad argument: Empty filename" << std::endl;
		return (false);
	}
	if (this->_old_str.empty())
	{
		std::cout << "Bad argument: Empty string to be replaced" << std::endl;
		return (false);
	}
	return (true);
}

void Sed::run(void) const
{
	char c;
	std::ifstream ifs(this->_infile.c_str());
	std::ofstream ofs(this->_outfile.c_str());
	std::string buffer;

	while (true) {
		c = ifs.get();
		if (!ifs.good())
			break;
		buffer += c;
		if (!buffer.compare(this->_old_str.substr(0, buffer.length())))
		{
			if (buffer == this->_old_str)
			{
				ofs << this->_new_str;
				buffer.clear();
			}
		}
		else
		{
			ofs << buffer;
			buffer.clear();
		}
	};
	ofs << buffer;
	ifs.close();
	ofs.close();
}
