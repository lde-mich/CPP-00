/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:57:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/06 15:42:22 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook phonebook;

	std::cout << "--PHONEBOOK--" << std::endl;
	std::cout << "" << std::endl;
    while (1)
    {
        std::cout << "Insert command: " << std::endl;
        std::getline (std::cin, cmd);
		std::cout << "" << std::endl;
    
        if (cmd == "add")
            phonebook.add();
        else if (cmd == "search")
            phonebook.search();
        else if(cmd == "exit")
            return (0);
		else
			 std::cout << "Command not found, use: |add| |search| |exit|" << std::endl;
    }
}
