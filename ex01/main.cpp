/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:25:01 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/15 20:21:33 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook myPhoneBook;
	std::string info;
	while (1)
	{
		std::cout << "Enter ADD or SEARCH or EXIT" << std::endl;
		std::cin >> info;
		if (info == "ADD")
		{
			if (!myPhoneBook.setNewContact(info))
			{
				std::cout << "Information error !" << std::endl;
				break;
			}
		}
		if (info == "EXIT")
			break;
		// if (info == "SEARCH")
	}
}
