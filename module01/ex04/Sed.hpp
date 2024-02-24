/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:35:27 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/24 19:02:41 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <string>

class Sed {
	public:
		Sed();
		Sed(std::string infile, std::string old_str, std::string new_str);
		~Sed();

		bool init_and_check(void) const;
		void run(void) const;

	private:
		std::string _infile;
		std::string _outfile;
		std::string _old_str;
		std::string _new_str;
};

#endif
