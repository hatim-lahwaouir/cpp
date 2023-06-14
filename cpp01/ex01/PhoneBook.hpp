/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahwaou <hlahwaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:12:43 by hlahwaou          #+#    #+#             */
/*   Updated: 2023/06/14 18:33:28 by hlahwaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Contact
{
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNbr;
    std::string _darketSecret;
    std::string _index;
    int         _exist;
    public:
            Contact();
            int         i_exist();
            std::string get_index();
            std::string get_firstName();
            std::string get_lastName();
            std::string get_nickName();
            void        set_index(std::string str);
            void        set_firstName(std::string str);
            void        set_lastName(std::string str);
            void        set_nickName(std::string str);
            void        set_darkSecret(std::string str);
};

class PhoneBook
{
    std::string print(std::string);
    Contact _contacts[8];
    void    get_firstName(int index);
    void    get_lastName(int index);
    void    get_nickName(int index);
    void    get_phoneNumber(int index);
    void    get_drackSecret(int index);
    public:
            PhoneBook();
            void    add();
            void    search(int index);
};