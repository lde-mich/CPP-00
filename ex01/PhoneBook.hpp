/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:57:00 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/09 11:49:26 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include <iomanip>

#define MACRO 3

class   PhoneBook
{
    private:
        Contact rubrica[MACRO];
        int     index;
        int     v_index;
        static std::string editstr(std::string s);
    public:
        void add();
        void search();
        PhoneBook();
        ~PhoneBook();
};