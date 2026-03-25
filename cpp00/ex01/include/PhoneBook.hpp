/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 13:28:42 by acesar-m          #+#    #+#             */
/*   Updated: 2026/03/07 13:28:42 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact ctt_list[8];
		int index;
	public:
		PhoneBook();
		void addContact();
        void searchContact();
        void displayHelp();
	};

#endif