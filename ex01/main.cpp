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


void fillPhonebook(PhoneBook &phonebook)
{
    // Contact 1
    phonebook.addContact("Jean", "Dupont", "JeanDu", "0612345678", "Aime le fromage");
    
    // Contact 2
    phonebook.addContact("Marie", "Martin", "MariM", "0623456789", "Developpeuse senior");
    
    // Contact 3
    phonebook.addContact("Pierre", "Bernard", "PierreBee", "0634567890", "Fan de 42");
    
    // Contact 4
    phonebook.addContact("Sophie", "Dubois", "SophieD", "0645678901", "Aime les chats");
    
    // Contact 5
    phonebook.addContact("Lucas", "Thomas", "LucasT", "0656789012", "Joueur de tennis");
    
    // Contact 6
    phonebook.addContact("Emma", "Robert", "EmmaRob", "0667890123", "Pianiste amateur");
    
    // Contact 7
    phonebook.addContact("Antoine", "Richard", "AntoineR", "0678901234", "Chef cuisinier");
    
    // Contact 8
    phonebook.addContact("Julie", "Petit", "JulieP", "0689012345", "Adore voyager");
}

int main()
{
	PhoneBook myPhoneBook;

	std::string info;
	fillPhonebook(myPhoneBook);
	while (1)
	{
		std::cout << "Enter ADD or SEARCH or EXIT" << std::endl;
		std::cin >> info;
		if (std::cin.eof())
			break;
		if (info == "ADD")
		{
			if (!myPhoneBook.setNewContact(info))
				std::cout << "Information error !" << std::endl;
		}
		if(info == "SEARCH")
			myPhoneBook.searchContact();
		if (info == "EXIT")
			break;
		std::cin.clear();
	}
}
