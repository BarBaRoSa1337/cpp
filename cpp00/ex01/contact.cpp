#include <iostream>
#include <string>
#include "contact.hpp"

void    PhoneBook::addContact()
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
    contacts[index].addContact(f_name, l_name, nick, num, secret);
    index++;
}

void    PhoneBook::search_contacts()
{
    int i = 0;
    std::string index;
    if (index.empty()) {
        std::cout << "No contacts available." << std::endl;
        return;
    }
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    while (i < index) {
        contacts[i].displayContact(i);
        i++;
    }
    std::cout << "Enter index of contact: ";
    std::getline(std::cin, index);
    if (index.size() != 1 || index[0] < '0' || index[0] > '7') {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    contacts[index[0] - '0'].search_contacts();
}

void    PhoneBook::displayContact(int index)
{
    contacts[index].displayContact(index);
}

void Contact::displayContact(int index) {
    std::cout << index << "|";
    std::cout << first_name << "|";
    std::cout << last_name << "|";
    std::cout << nickname << std::endl;
}

void    Contact::addContact(std::string f_name, std::string l_name, std::string nick, std::string num, std::string secret)
{
    f_name.size() > 10 ? first_name = f_name.substr(0, 9) + "." : first_name = f_name;
    l_name.size() > 10 ? last_name = l_name.substr(0, 9) + "." : last_name = l_name;
    nick.size() > 10 ? nickname = nick.substr(0, 9) + "." : nickname = nick;
    num.size() > 10 ? phoneNumber = num.substr(0, 9) + "." : phoneNumber = num;
    secret.size() > 10 ? darkest_secret = secret.substr(0, 9) + "." : darkest_secret = secret;
}
