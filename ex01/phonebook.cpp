/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:39:58 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/15 20:54:04 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	nbOfContacts = 0;
	contactToChange = 0;
}
bool PhoneBook::IsDigit(char c)
{
	if ('0' <= c && c <= '9')
		return (true);
	return (false);
}

bool PhoneBook::isPhoneNumber(const std::string &PhoneNumber)
{
	int i;

	i = 0;
	while (PhoneNumber[i])
	{
		if (!isdigit(PhoneNumber[i]))
			return (false);
		i++;
	}
	return (true);
}

int PhoneBook::setNewContact(std::string &info)
{
	std::cout << "enter your name:" << std::endl;
	std::cin >> info;
	// if (info[0] != "\0")
	add(info, NAME);
	std::cout << "enter your last name: " << std::endl;
	std::cin >> info;
	add(info, LASTNAME);
	std::cout << "enter your nickname: " << std::endl;
	std::cin >> info;
	add(info, NICKNAME);
	std::cout << "enter your phone number: " << std::endl;
	std::cin >> info;
	if (!isPhoneNumber(info))
		return (0);
	add(info, PHONENUMBER);
	std::cout << "enter your darkest secret:  " << std::endl;
	std::cin >> info;
	add(info, DARKESTSECRET);
	return (1);
}

int PhoneBook::add(std::string &info, int type)
{
	int i;

	i = nbOfContacts;
	if (nbOfContacts == 9)
	{
		i = contactToChange;
		if (contactToChange == 8)
			contactToChange = 0;
		else
			contactToChange++;
	}
	if (type == NAME)
		this->myContacts[i].setName(info);
	if (type == LASTNAME)
		this->myContacts[i].setLastName(info);
	if (type == NICKNAME)
		this->myContacts[i].setNickName(info);
	if (type == PHONENUMBER)
	{
		if (!isPhoneNumber(info))
			return (-1);
		this->myContacts[i].setPhoneNumber(info);
	}
	else
		this->myContacts[i].setDarkestSecret(info);
	return (1);
}
