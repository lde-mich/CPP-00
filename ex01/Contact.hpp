/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:11:21 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/02 10:48:36 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

std::string getFirstName();

class   Contact
{
    private :
        std::string firstName;
        std::string lastName;
        std::string nickName;
        int phoneNumber;
        std::string darkestSecret;
    public :
};