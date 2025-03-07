#include "contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    is_full = 0;
}

void    PhoneBook::add_contacts()
{
    std::string secret;
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string num;

    std::cout << ">> Enter first name: ";
    std::getline(std::cin, f_name);

    std::cout << ">> Enter last name: ";
    std::getline(std::cin, l_name);

    std::cout << ">> Enter nickname: ";
    std::getline(std::cin, nick);

    std::cout << ">> Enter phone number: ";
    std::getline(std::cin, num);

    std::cout << ">> Enter darkest secret: ";
    std::getline(std::cin, secret);

    if (f_name.empty() || l_name.empty() || nick.empty() || num.empty() || secret.empty()) {
        std::cout << "All fields must be filled. Contact not saved." << std::endl;
        return;
    }
    contacts[index].join_Contact(f_name, l_name, nick, num, secret);
    if (index == 8)
    {
        is_full = 1;
        index = 0;
    }
    else
        index++;
}

void    PhoneBook::search_contacts()
{
    std::string ind;
    int         tmp = 0;
    int           i = 0;

    if (index == 0 && is_full == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }
    if (is_full)
        tmp = 8;
    else
        tmp = index;
    while (i < tmp)
    {
        //std::cout << index|first name| last name|  nickname << std::endl;
        contacts[i].display_full_Contact();//display with setwd
        i++;
    }
    std::cout << "Enter index of contact: ";
    std::getline(std::cin, ind);
    if (ind.size() != 1 || ind[0] < '0' || ind[0] > '7' || ind[0] - '0' < index)
    {
        std::cout << "Invalid index !" << std::endl;
        std::cout << "Max index is" << index << std::endl;
        return;
    }
    contacts[ind[0] - '0'].display_Contact();
}
