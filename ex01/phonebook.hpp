/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:55:34 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/13 11:59:21 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
private:
	contact mycontacts[9];
	int nbOfContacts;

public:
	PhoneBook();
	void add(char **info);
};
