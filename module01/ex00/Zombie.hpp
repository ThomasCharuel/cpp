/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:18:03 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/18 23:42:56 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
  public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void) const;

  private:
	std::string _name;
};

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

#endif
