#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);
}

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Copy assignment    -  deep copy
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)                                 //check to see if the pointer of this is the same as rhs
        return *this;
    delete [] this->str;                              //delete the allocated space in str
    str = new char[std::strlen(rhs.str) + 1];         //allocate memory on the heap the size of rhs
    std::strcpy(this->str, rhs.str);
    return *this;
    
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }




