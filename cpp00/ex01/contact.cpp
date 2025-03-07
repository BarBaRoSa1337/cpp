#include "contact.hpp"

void Contact::display_full_Contact() {

    std::string f_name = first_name.size() > 10 ? first_name.substr(0, 9) + "." : first_name;
    std::string l_name = last_name.size() > 10 ? last_name.substr(0, 9) + "." : last_name;
    std::string nick = nickname.size() > 10 ? nickname.substr(0, 9) + "." : nickname;
    std::string Number = Number.size() > 10 ? Number.substr(0, 9) + "." : Number;
    std::string secret = darkest_secret.size() > 10 ? darkest_secret.substr(0, 9) + "." : darkest_secret;
    
    std::cout << "|" << std::setw(10) << first_name << "|";
    std::cout << std::setw(10) << l_name << "|";
    std::cout << std::setw(10) << nick << "|";
    std::cout << std::setw(10) << Number << "|";
    std::cout << std::setw(10) << secret << "|" << std::endl;
}

void    Contact::join_Contact(std::string f_name, std::string l_name, std::string nick,        std::string num, std::string secret) {

    first_name = f_name;
    last_name = l_name;
    nickname = nick;
    phoneNumber = num;
    darkest_secret = secret;

}

void    Contact::display_Contact() {

    std::cout << "First Name :" << first_name << std::endl;
    std::cout << "Last Name :" << last_name << std::endl;
    std::cout << "Nick Name :" << nickname << std::endl;
    std::cout << "Phone Number :" << phoneNumber << std::endl;
    std::cout << "Darkest Secret :" << darkest_secret << std::endl;

}
