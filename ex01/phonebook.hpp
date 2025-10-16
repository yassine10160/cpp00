/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:55:34 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/15 20:18:55 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

#define NAME 0
#define LASTNAME 1
#define NICKNAME 2
#define PHONENUMBER 3
#define DARKESTSECRET 4

class PhoneBook
{
private:
	int nbOfContacts;
	int contactToChange;
	Contact myContacts[9];

public:
	PhoneBook();
	bool isPhoneNumber(const std::string &phoneNumber);
	int add(std::string &info, int type);
	int setNewContact(std::string &info);
	bool IsDigit(char c);
};
