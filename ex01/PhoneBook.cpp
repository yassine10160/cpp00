/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:39:58 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/26 19:36:17 by yassinefahf      ###   ########.fr       */
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
	while (PhoneNumber[i] && isdigit(PhoneNumber[i]))
		i++;
	if (i != 10)
		return (false);
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
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, info);
	add(info, DARKESTSECRET);
	std::cout << "\n";
	std::cout << "Contact added !" << std::endl;
	std::cout << "\n";
	if (nbOfContacts < 8)
		nbOfContacts++;
	if (nbOfContacts == 8)
	{
		if (contactToChange == 7)
			contactToChange = 0;
		else
			contactToChange++;
	}
	return (1);
}

int PhoneBook::add(const std::string &info, int type)
{
	int i;

	i = nbOfContacts;
	if (nbOfContacts == 8)
	{
		i = contactToChange;
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

std::string	PhoneBook::truncate(std::string info)
{
	if (info.length() > 10)
	{
		info = info.substr(0, 10);
		info[9] = '.';
	}
	return (info);
}

void	PhoneBook::displaySpecificContact(int index)
{
	int	i;

	i = index - 1;
	std::cout<<"First Name: "<<myContacts[i].getName()<<std::endl;
	std::cout<<"Last name: "<<myContacts[i].getLastName()<<std::endl;
	std::cout<<"NickName: "<<myContacts[i].getNickName()<<std::endl;
	std::cout<<"PhoneNumber: "<<myContacts[i].getPhoneNumber()<<std::endl;
	std::cout<<"DarkestSecret: "<<myContacts[i].getDarkestSecret()<<std::endl;
}

void	PhoneBook::displayContact(int mode, int index)
{
	int	i;

	i = 0;
	if (mode == ALL_INFO)
	{
		displaySpecificContact(index);
		return;
	}
	while (i < nbOfContacts)
	{
		std::cout<<"|"<<std::setw(10)<<i + 1;
		std::cout<<"|"<<std::setw(10)<<truncate(myContacts[i].getName());
		std::cout<<"|"<<std::setw(10)<<truncate(myContacts[i].getLastName());
		std::cout<<"|"<<std::setw(10)<<truncate(myContacts[i].getNickName());
		if (mode == ALL_INFO)
		{
			std::cout<<"|"<<std::setw(10)<<truncate(myContacts[i].getDarkestSecret());
			std::cout<<"|"<<std::endl;
			break;
		}
		std::cout<<"|"<<std::endl;
		i++;
	}
}

void	PhoneBook::displayLine(int option)
{
		std::cout<<"|"<<std::setw(10)<<truncate("Index");
		std::cout<<"|"<<std::setw(10)<<truncate("First Name");
		std::cout<<"|"<<std::setw(10)<<truncate("Last Name");
		std::cout<<"|"<<std::setw(10)<<truncate("NickName");
		if (option == DARKESTSECRET)
			std::cout<<"|"<<std::setw(10)<<truncate("DarkestSe.");
		std::cout<<"|"<<std::endl;
}

void	PhoneBook::displayContacts()
{
	int	i;

	i = 0;
	
	displayLine(0);
	displayContact(0, 0);
}

void	displayContactInfo()
{

}

void	PhoneBook::searchContact()
{
	std::string	info;

	displayContacts();
	std::cout<<"enter an index: ";
	std::cin>>info;
	if ((atoi(info.c_str()) == 0 && info.compare("0") != 0) ||  atoi(info.c_str()) > nbOfContacts || atoi(info.c_str()) <= 0)
	{
		std::cerr<<"Error : Invalid Index !"<<std::endl;
	}
	else
		displayContact(ALL_INFO, atoi(info.c_str()));
}

void	PhoneBook::addContact(const std::string &name, const std::string &name2, const std::string &name3, const std::string &name4, const std::string &name5)
{
	add(name, NAME);
	add(name2, LASTNAME);
	add(name3, NICKNAME);
	add(name4, PHONENUMBER);
	add(name5, DARKESTSECRET);
	nbOfContacts++;
}