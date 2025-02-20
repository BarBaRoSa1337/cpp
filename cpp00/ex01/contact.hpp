#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class PhoneBook {
    private:
        Contact contacts[8];
        int index;
    public:
        PhoneBook();
        void addContact();
        void search_contacts();
        void displayContact(int index);
};

class Contact {

private:

    std::string darkest_secret;
    std::string phoneNumber;
    std::string first_name;
    std::string last_name;
    std::string nickname;

public:

   void addContact(std::string f_name, std::string l_name, std::string nick, std::string num, std::string secret);
    void search_contacts();
    void displayContact(int index);

};


#endif