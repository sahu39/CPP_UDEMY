#include <cstring>
#include <iostream>
#include <Mystring.h>

Mystring::Mystring()
    :str{nullptr}{
        str = new char[1];
        *str = '\0';
}

//overloaded Constructor
Mystring::Mystring(const char *source)
    :str(nullptr){
        if(source == nullptr)
        {
            str = new char[1];
            *str = '\0';
        }
        else
        {
            str = new char[std::strlen(source)+1];
            std::strcpy(str,source);
        }
}

Mystring::Mystring(const Mystring &source)
    :str(nullptr){
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str,source.str);
}
//Copy Assignment
Mystring &Mystring::operator =(const Mystring &rhs)
{
    std::cout << "Copy Assignment Operator" << std::endl;
    if(this == &rhs)
    {
        return *this;
    }
    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str,rhs.str);
    return *this;
}
Mystring::~Mystring()
{
    delete[]str;
}

int Mystring::get_length() const{return std::strlen(str);}

const char *Mystring::get_str() const{return str;}

void Mystring::display() const
{
    std::cout <<str<<":"<<get_length()<<std::endl;
}
