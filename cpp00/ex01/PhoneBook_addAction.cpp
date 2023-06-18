/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_addAction.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:21:43 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/18 11:21:44 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


bool    PhoneBook::isDigits(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

void    PhoneBook::set_firstName(int index, std::string input)
{
    this->_contacts[index].set_firstName(input);
}

void    PhoneBook::set_lastName(int index, std::string input)
{
    this->_contacts[index].set_lastName(input);
}

void    PhoneBook::set_nickName(int index, std::string input)
{
    this->_contacts[index].set_nickName(input);
}

void    PhoneBook::set_phoneNumber(int index, std::string input)
{
    this->_contacts[index].set_phoneNumber(input);
}

void    PhoneBook::set_darkestSecret(int index, std::string input)
{
    this->_contacts[index].set_darkestSecret(input);
}

void    PhoneBook::Add()
{
    this->_lastIndex = this->_lastIndex * (this->_lastIndex < 8);
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter your nickname: ";
    std::getline(std::cin, nickName);
    std::cout << "Enter your phonenumber: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter your darkest secret:  ";
    std::getline(std::cin, darkestSecret);

    if (firstName.length() == 0 || lastName.length() == 0 || nickName.length() == 0 || phoneNumber.length() == 0 || darkestSecret.length() == 0)
        return;
    this->set_firstName(this->_lastIndex, firstName);
    this->set_lastName(this->_lastIndex, lastName);
    this->set_nickName(this->_lastIndex, nickName);
    this->set_phoneNumber(this->_lastIndex, phoneNumber);
    this->set_darkestSecret(this->_lastIndex, darkestSecret);
    this->_lastIndex++;
    this->_contactSize = this->_contactSize + 1 * (this->_contactSize < 8);
}
