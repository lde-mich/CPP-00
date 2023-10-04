/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:57:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/04 12:24:49 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

int main()
{
    std::string cmd;

    std::cout<<"Insert command"<<std::endl;
    std::cin>>cmd;

    if (cmd == "add")
        std::cout<<"add"<<std::endl;
    else if (cmd == "search")
        std::cout<<"search"<<std::endl;
    else if(cmd == "exit")
    {
        std::cout<<"exit"<<std::endl;
        return (0);
    }
}
