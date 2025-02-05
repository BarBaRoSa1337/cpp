#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {

private:

    std::string darkest_secret;
    char phoneNumber[10];
    char first_name[10];
    char last_name[10];
    char nickname[10];

public:

   void addContact(char f_name[10], char l_name[10], char nick[10], char num[10], char secret[10]);
   void search_contacts();

};

void    Contact::addContact(char f_name[10], char l_name[10], char nick[10], char num[10], char secret[10])
{
    darkest_secret = secret;
    // first_name.strnc
    // last_name = last_name;
    // nickname = nick;
    // phoneNumber = num;
    // darkest_secret = secret;
}

#endif