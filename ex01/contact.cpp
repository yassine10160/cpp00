/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:48:55 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/13 15:56:36 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(const contact &newContact)
{
	name = newContact.name;
	lastName = newContact.lastName;
	nickName = newContact.nickName;
	phoneNumber = newContact.phoneNumber;
	darkestSecret = newContact.darkestSecret;
}

contact &contact::operator=(const contact &newcontact)
{
	this->darkestSecret = newcontact.darkestSecret;
	this->lastName = newcontact.lastName;
	this->name = newcontact.name;
	this->phoneNumber = newcontact.phoneNumber;
}
