/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:39:58 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/13 15:59:05 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	nbOfContacts = 0;
	contactToChange = -1;
}

void PhoneBook::add(char **info)
{
	int realIndex;

	realIndex = this->nbOfContacts;
	if (nbOfContacts == 9)
		realIndex = 0;


}