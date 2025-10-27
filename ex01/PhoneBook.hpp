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
#include <iomanip>
#include <cstdlib>
#include <limits>

#define NAME 0
#define LASTNAME 1
#define NICKNAME 2
#define PHONENUMBER 3
#define DARKESTSECRET 4
#define	FIRST 5
#define ALL_INFO 6

class PhoneBook
{
private:
	int nbOfContacts;
	int contactToChange;
	Contact myContacts[8];

public:
	PhoneBook();
	bool isPhoneNumber(const std::string &phoneNumber);
	int add(const std::string &info, int type);
	int setNewContact(std::string &info);
	bool IsDigit(char c);
	void	searchContact();
	void	displayContacts();
	void	displayLine(int option);
	void	displayContact(int mode, int index);
	void	displayContactInfo();
	void addContact(const std::string &name, const std::string &name2, const std::string &name3, const std::string &name4, const std::string &name5);
	std::string truncate(std::string info);
	void	displaySpecificContact(int index);
};
