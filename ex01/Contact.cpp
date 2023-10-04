/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:12:00 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/04 15:24:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const
{
    return this->firstName;
}
std::string Contact::getLastName() const
{
    return this->lastName;
}
std::string Contact::getNickName() const
{
    return this->nickName;
}
std::string Contact::getDarkestSecret() const
{
    return this->darkestSecret;
}
int Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}