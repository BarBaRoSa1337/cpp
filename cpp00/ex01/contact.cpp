#include "contact.hpp"

void    Contact::display_full_Contact() {

    f_name.size() > 10 ? first_name.substr(0, 9) + ".";
    l_name.size() > 10 ? last_name.substr(0, 9) + ".";
    nick.size() > 10 ? nickname.substr(0, 9) + ".";
    num.size() > 10 ? phoneNumber.substr(0, 9) + ".";
    secret.size() > 10 ? darkest_secret.substr(0, 9) + ".";

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
    std::cout << "nickname :" << nickname << std::endl;
    std::cout << "Phone number :" << phoneNumber << std::endl;
    std::cout << "darkest secret :" << darkest_secret << std::endl;

}
