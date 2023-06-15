#include "iostream"

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
        // seters
            void        set_firstName(std::string str);
            void        set_lastName(std::string str);
            void        set_nickName(std::string str);
            void        set_phoneNumber(std::string str);
            void        set_darkestSecret(std::string str);
};

class   PhoneBook
{
    Contact     _contacts[8];
    // index Of Last Contact
    void        set_firstName(int index);
    void        set_lastName(int index);
    void        set_nickName(int index);
    void        set_phoneNumber(int index);
    void        set_darkestSecret(int index);
    void        infoOfIndex();
    int         _contactSize;
    int         _lastIndex;
    // display function of search
    void        display();
    void        printFormat(std::string str);
    // all degits
    bool        isDigits(std::string str);
    public:
        PhoneBook();
        // actions
        void    Add();
        void    Search();
        void    Exit();
};
