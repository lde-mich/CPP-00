/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:57:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/06 11:05:24 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook phonebook;

    std::cout << "Insert command" << std::endl;
    std::getline (std::cin, cmd);

    if (cmd == "add")
        phonebook.add();
    else if (cmd == "search")
        std::cout << "search" << std::endl;
    else if(cmd == "exit")
    {
        std::cout << "exit" << std::endl;
        return (0);
    }
}
