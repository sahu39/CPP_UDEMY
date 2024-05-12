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

Mystring::Mystring(Mystring &&source)
{
    this->str = source.str;
    source.str = nullptr;
    std::cout << "Move Constructor is used" << std::endl;
}

Mystring & Mystring::operator=(Mystring &&rhs)
{
    std::cout<<"Move Assignment Operator"<<std::endl;
    if(this == &rhs)
        return *this;
    delete[] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
Mystring::~Mystring()
{
    std::cout<<"Destructor is called for:"<<this<<std::endl;
    delete[]str;
}

int Mystring::get_length() const{return std::strlen(str);}

const char *Mystring::get_str() const{return str;}

void Mystring::display() const
{
    std::cout <<str<<":"<<get_length()<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Mystring &obj)
{
    os << obj.str;
    return os;
}

std::istream &operator>>(std::istream &is, Mystring &obj)
{
    char *buff = new char[1000];
    is >> buff;
    obj = Mystring {buff};
    delete[] buff;
    return is;
}