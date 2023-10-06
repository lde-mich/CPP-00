/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:57:52 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/06 12:26:30 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    
}

PhoneBook::~PhoneBook()
{
    
}

void    PhoneBook::add()
{
    std::string temp;

    std::cout << "Insert FirstName: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setFirstName(temp);
    std::cout << "Insert LastName: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setLastName(temp);
    std::cout << "Insert NickName: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setNickName(temp);
    std::cout << "Insert PhoneNumber: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setPhoneNumber(temp);
    std::cout << "Insert DarkestSecret: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setDarkestSecret(temp);
    std::cout << "" << std::endl;
}

void    PhoneBook::search()
{
	int	i;
	
	i = 0;
	while (i < 8)
	{
		std::cout << " | " << i;
		std::cout << " | " << this->rubrica[0].getFirstName();
		std::cout << " | " << this->rubrica[0].getLastName();
		std::cout << " | " << this->rubrica[0].getNickName();
		std::cout << " | " << this->rubrica[0].getPhoneNumber();
		std::cout << " | " << this->rubrica[0].getDarkestSecret() << " |";
		std::cout << "" << std::endl;
		i++;
	}
}