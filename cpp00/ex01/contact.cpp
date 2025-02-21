#include "contact.hpp"

void    PhoneBook::add_contacts()
{
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string num;
    std::string secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, f_name);
    std::cout << "Enter last name: ";
    std::getline(std::cin, l_name);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nick);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, num);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, secret);
    if (f_name.empty() || l_name.empty() || nick.empty() || num.empty() || secret.empty()) {
        std::cout << "All fields must be filled. Contact not saved." << std::endl;
        return;
    }
    sim[index].join_Contact(f_name, l_name, nick, num, secret);
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
    int         i = 0;

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
        sim[i].displayContact();
        i++;
    }
    std::cout << "Enter index of contact: ";
    std::getline(std::cin, ind);
    if (ind.size() != 1 || ind[0] < '0' || ind[0] > '7' || ind[0] - '0' < index)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    sim[ind[0] - '0'].displayContact();
}

void    Contact::displayContact() {

    std::cout << first_name << "|";
    std::cout << last_name << "|";
    std::cout << nickname << std::endl;
}

void    Contact::join_Contact(std::string f_name, std::string l_name, std::string nick, std::string num, std::string secret)
{
    f_name.size() > 10 ? first_name = f_name.substr(0, 9) + "." : first_name = f_name;
    l_name.size() > 10 ? last_name = l_name.substr(0, 9) + "." : last_name = l_name;
    nick.size() > 10 ? nickname = nick.substr(0, 9) + "." : nickname = nick;
    num.size() > 10 ? phoneNumber = num.substr(0, 9) + "." : phoneNumber = num;
    secret.size() > 10 ? darkest_secret = secret.substr(0, 9) + "." : darkest_secret = secret;
}

PhoneBook::PhoneBook()
{
    index = 0;
    is_full = 0;
}