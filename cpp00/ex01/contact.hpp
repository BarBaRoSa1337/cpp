#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

private:

    std::string darkest_secret;
    std::string phoneNumber;
    std::string first_name;
    std::string last_name;
    std::string nickname;

public:

   void join_Contact(std::string f_name, std::string l_name, std::string nick, std::string num, std::string secret);
    void display_full_Contact();
    void display_Contact();
};

#endif