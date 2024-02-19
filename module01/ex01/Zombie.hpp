/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:18:03 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/19 10:08:35 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
  public:
  	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void setName(std::string name);

	void announce(void) const;

  private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
