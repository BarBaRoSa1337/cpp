#include "contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    is_full = 0;
}
void PhoneBook::add_contacts()
{
    std::string secret;
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string num;

    std::cout << ">> Enter first name: ";
    std::cin.ignore();
    std::getline(std::cin, f_name);

    std::cout << ">> Enter last name: ";
    std::getline(std::cin, l_name);

    std::cout << ">> Enter nickname: ";
    std::getline(std::cin, nick);

    std::cout << ">> Enter phone number: ";
    std::getline(std::cin, num);

    std::cout << ">> Enter darkest secret: ";
    std::getline(std::cin, secret);

    // Print all fields
    std::cout << "First Name: " << f_name << std::endl;
    std::cout << "Last Name: " << l_name << std::endl;
    std::cout << "Nick Name: " << nick << std::endl;
    std::cout << "Phone Number: " << num << std::endl;
    std::cout << "Darkest Secret: " << secret << std::endl;

    if (f_name.empty() || l_name.empty() || nick.empty() || num.empty() || secret.empty()) {
        std::cout << "\033[1;31mAll fields must be filled. Contact not saved.\033[0m" << std::endl;
        return;
    }

    contacts[index].join_Contact(f_name, l_name, nick, num, secret);
    
    if (index == 8) {
        is_full = 1;
        index = 0;
    } else {
        index++;
    }
}

void    PhoneBook::search_contacts()
{
    std::string ind;
    int         tmp = 0;
    int           i = 0;

    if (index == 0 && is_full == 0) {
        std::cout << "\033[1;31m!! No Contacts Are Available !!\033[0m" << std::endl;
        return;
    }
    if (is_full)
        tmp = 8;
    else
        tmp = index;
    while (i < tmp)
    {
        std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nick Name" << std::endl;
        contacts[i].display_full_Contact(i + 1);
        i++;
    }
    std::cout << "\033[1;32mEnter index of contact: \033[0m";
    std::cin.ignore();
    std::getline(std::cin, ind);
    if (ind.size() != 1 || ind[0] < '0' || ind[0] > '7' || ind[0] - '0' < index || ind[0] - '0' > index)
{
        std::cout << "\033[1;31m!! Invalid index !!; Max index is && Nin is 1" << index << "\033[0m" << std::endl;
        return;
    }
    contacts[ind[0] - '0' - 1].display_Contact();
}
 