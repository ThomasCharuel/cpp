/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharuel <tcharuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:33:29 by tcharuel          #+#    #+#             */
/*   Updated: 2024/02/14 10:07:28 by tcharuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define MAX_CONTACT 8

# include "Contact.hpp"
# include <string>

class PhoneBook
{
  public:
	PhoneBook(void);
	~PhoneBook(void);

	void addContact(void);
	void displayContacts(void) const;

  private:
	int _contactIndex;
	Contact _contacts[MAX_CONTACT];
};

#endif
