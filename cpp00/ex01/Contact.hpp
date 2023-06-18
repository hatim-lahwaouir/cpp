#ifndef CONTACT_HPP
#define CONTACT_HPP

# include "iostream"

class Contact
{
    std::string _firstName;
    std::string _lasttName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
    int         _index;
    public:
        Contact();
        // geters
            std::string get_firstName();
            std::string get_lastName();
            std::string get_nickName();
            std::string get_phoneNumber();
            std::string get_darkestSecret();
        // seters
            void        set_firstName(std::string str);
            void        set_lastName(std::string str);
            void        set_nickName(std::string str);
            void        set_phoneNumber(std::string str);
            void        set_darkestSecret(std::string str);
};

#endif