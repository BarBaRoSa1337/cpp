#include "contact.hpp"
#include "PhoneBook.hpp"

int main() {
   PhoneBook phonebook;

    std::cout << "\033[1;32m"
        << "******************************************" << std::endl
        << "*                                        *" << std::endl
        << "*          WELCOME TO PHONEBOOK          *" << std::endl
        << "*                                        *" << std::endl
        << "******************************************" << std::endl
        << "\033[0m";
   while (1)
   {
        std::cout << "\033[1;32m"
            << "******************************************" << std::endl
            << "*                                        *" << std::endl
            << "*        commands are ADD, SEARCH, EXIT   *" << std::endl
            << "*                                        *" << std::endl
            << "******************************************" << std::endl
            << "\033[0m";
        std::cout << ">> ";
        std::string command;
        std::cin >> command;
        if (command.empty())
            return 1;
        if (command == "ADD")
        {
            phonebook.add_contacts();
        }
        else if (command == "SEARCH")
        {
            phonebook.search_contacts();
        }
        else if (command == "EXIT")
        {
            return 0;
        }
   }
   return 0;
}