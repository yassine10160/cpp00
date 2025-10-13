/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 17:21:52 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/10/13 15:51:22 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class contact
{
private:
	char *name;
	char *lastName;
	char *nickName;
	int phoneNumber;
	char *darkestSecret;

public:
	contact(const contact &newContact);
	int getNbContact();
	contact getContact(int index);
	contact &operator=(const contact &newContact);
};