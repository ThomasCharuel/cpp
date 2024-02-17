/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:20 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/17 11:08:35 by tcharuel         ###   ########.fr       */
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

	std::string getIndex(void) const;
	void setIndex(std::string index);

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

	void displaySummary(void) const;
	bool displayDetails(void) const;

  private:
	bool _isVisible;
	std::string _index;
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

	static void _displayCell(std::string content);
};

#endif
