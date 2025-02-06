#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {

private:

    std::string darkest_secret;
    std::string phoneNumber;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int index;

public:
    void set_values(std::string f_name, std::string l_name, std::string num, std::string nick, std::string secret, int i);
    void    print_contact();
};

void    Contact::print_contact()
{
    std::cout << first_name << "  ";
    std::cout << last_name << " ";
    std::cout << phoneNumber << " ";
    std::cout << nickname << " ";
    std::cout << darkest_secret << " ";
}

void Contact::set_values(std::string f_name, std::string l_name, std::string num, std::string nick, std::string secret, int i)
{
    first_name = f_name;
    last_name = l_name;
    phoneNumber = num;
    nickname = nick;
    darkest_secret = secret;
    index = i;
}

class PhoneBook {
    private:
        Contact sim[8];

    public:

   void addContact(std::string f_name, std::string l_name, std::string nick, std::string num, std::string secret, int index);
   void search_contacts(int index);
};

void    PhoneBook::search_contacts(int index)
{
    int i = 0;
    while (i < index)
    {
        sim[i].print_contact();
        std::cout << std::endl;
        ++i;
    }
}

void    PhoneBook::addContact(std::string f_name, std::string l_name, std::string nick, std::string num, std::string secret, int index)
{   
    sim[index].set_values(f_name, l_name, num, nick, secret, index);
}

#endif