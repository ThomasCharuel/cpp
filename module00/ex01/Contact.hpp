/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:20 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/15 15:11:11 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  public:
	Contact(void);
	~Contact(void);

	std::string getFirstName(void) const;
	void setFirstName(std::string firstName);

	std::string getLastName(void) const;
	void setLastName(std::string lastName);

	std::string getNickname(void) const;
	void setNickname(std::string nickname);

	std::string getPhoneNumber(void) const;
	void setPhoneNumber(std::string phoneNumber);

	std::string getDarkestSecret(void) const;
	void setDarkestSecret(std::string darkestSecret);

  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
