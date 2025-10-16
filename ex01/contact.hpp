/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:21:52 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/15 20:15:47 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
private:
	std::string name;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact();
	Contact(const Contact &newContact);
	int getNbContact();
	Contact &operator=(const Contact &newContact);
	void setName(const std::string &name);
	void setDarkestSecret(const std::string &darkestSecret);
	void setPhoneNumber(const std::string &phoneNumber);
	void setNickName(const std::string &nickName);
	void setLastName(const std::string &lastName);
};