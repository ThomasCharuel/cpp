/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:35:15 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 08:45:13 by tcharuel         ###   ########.fr       */
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

// std::ifstream ifs("numbers");
// unsigned int dst;
// unsigned int dst2;

// ifs >> dst >> dst2;

// ifs.close();

// std::ofstream ofs("test.out");
// ofs << "I like ponies" << std::endl;
// ofs.close();

