/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:57:00 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/06 10:58:44 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>
#include "Contact.hpp"

class   PhoneBook
{
    private:
        Contact rubrica[8];
    public:
        void add();
        // void search();
        PhoneBook();
        ~PhoneBook();
};