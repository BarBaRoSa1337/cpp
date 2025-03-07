#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "contact.hpp"
#include <string>

class PhoneBook {

    private:
        Contact contacts[8];
        int index;
        int is_full;
    public:
        PhoneBook();
        void add_contacts();
        void search_contacts();
    
};

#endif