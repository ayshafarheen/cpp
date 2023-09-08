/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:24:35 by afarheen          #+#    #+#             */
/*   Updated: 2023/09/04 10:24:36 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc > 1)
		for (int i = 1; argv[i]; i++)
			for (int j = 0; argv[i][j]; j++)
				if(isalpha(argv[i][j]))
					std::cout << (char)toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}