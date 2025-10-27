/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:48:55 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/15 20:20:33 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(const Contact &newContact)
{
	name = newContact.name;
	lastName = newContact.lastName;
	nickName = newContact.nickName;
	phoneNumber = newContact.phoneNumber;
	darkestSecret = newContact.darkestSecret;
}

Contact &Contact::operator=(const Contact &newcontact)
{
	this->darkestSecret = newcontact.darkestSecret;
	this->lastName = newcontact.lastName;
	this->name = newcontact.name;
	this->phoneNumber = newcontact.phoneNumber;
	return (*this);
}

void Contact::setName(const std::string &name)
{
	this->name = name;
}

void Contact::setLastName(const std::string &lastName)
{
	this->lastName = lastName;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void Contact::setNickName(const std::string &nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getName()
{
	return this->name;
}


std::string	Contact::getLastName()
{
	return this->lastName;
}

std::string	Contact::getNickName()
{
	return this->nickName;
}

std::string	Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string	Contact::getDarkestSecret()
{
	return this->darkestSecret;
}