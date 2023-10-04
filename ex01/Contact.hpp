/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:11:21 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/04 16:43:43 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>

class   Contact
{
    private :
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        int phoneNumber;
    public :
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getDarkestSecret() const;
        int getPhoneNumber() const;
        void   	setFirstName(std::string firstName);
        void   	setLastName(std::string lastName);
        void   	setNickName(std::string nickName);
        void   	setDarkestSecret(std::string darkestName);
        void	setPhoneNumber(int phoneNumber);
};