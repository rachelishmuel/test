//
// Created by rachelishmuel on 9/23/19.
//

#include "Animal.h"

Animal::Animal(const std::string &name, unsigned int life_expectanc):m_name(name),m_life_expectanc(life_expectanc){}



std::ostream& operator<<(std::ostream& os, const Animal*obj)
{
    os << obj->getDescription();// write obj to stream
    return os;
}

test
