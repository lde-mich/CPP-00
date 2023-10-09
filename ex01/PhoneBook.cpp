/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:57:52 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/09 11:53:58 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
	this->v_index = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void    PhoneBook::add()
{
    std::string temp;

	if (this->index % MACRO == 0)
		this->v_index = 0;
    std::cout << "Insert FirstName: " << std::endl;
    std::getline (std::cin, temp);	
    this->rubrica[this->v_index].setFirstName(temp);
    std::cout << "Insert LastName: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[this->v_index].setLastName(temp);
    std::cout << "Insert NickName: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[this->v_index].setNickName(temp);
    std::cout << "Insert PhoneNumber: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[this->v_index].setPhoneNumber(temp);
    std::cout << "Insert DarkestSecret: " << std::endl;
    std::getline (std::cin, temp);
    this->rubrica[this->v_index].setDarkestSecret(temp);
    std::cout << "" << std::endl;
	this->index += (this->index < MACRO);
	this->v_index++;
}

std::string PhoneBook::editstr(std::string s)
{
	if (s.size() > 10)
	{
		s.resize(10);
		s[9] = '.';
	}
	return (s);
}

void    PhoneBook::search()
{
	int	i;
	
	i = 0;
	while (i < this->index)
	{
		std::cout << "|"
		<< std::setfill(' ') << std::setw(10)
		<< i + 1
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editstr(this->rubrica[i].getFirstName())
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editstr(this->rubrica[i].getLastName())
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editstr(this->rubrica[i].getNickName())
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editstr(this->rubrica[i].getPhoneNumber())
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editstr(this->rubrica[i].getDarkestSecret())
		<< "|"
		<< "" << std::endl;
		i++;
	}
}