/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:57:52 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/05 16:12:47 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add()
{
    std::string temp;

    std::cout<<"Insert firstName"<<std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setFirstName(temp);
    std::cout<<"Insert lastName"<<std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setLastName(temp);
    std::cout<<"Insert nickName"<<std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setNickName(temp);
    std::cout<<"Insert phoneNumber"<<std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setPhoneNumber(temp);
    std::cout<<"Insert darkestSecret"<<std::endl;
    std::getline (std::cin, temp);
    this->rubrica[0].setDarkestSecret(temp);
}
