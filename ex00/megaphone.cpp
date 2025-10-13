/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassinefahfouhi <yassinefahfouhi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:46:33 by yassinefahf       #+#    #+#             */
/*   Updated: 2025/07/05 21:10:53 by yassinefahf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i;
		int j;

		j = 1;
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				if (av[j][i] >= 'a' && av[1][i] <= 'z')
					av[j][i] -= 32;
				std::cout << av[j][i];
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
}