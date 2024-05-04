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

//lowercase
Mystring operator-(const Mystring &obj)
{
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff,obj.str);
    for(size_t i=0; i<std::strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;    
}

//equailty
bool operator==(const Mystring &lhs,const Mystring &rhs)
{
    return (std::strcmp(lhs.str,rhs.str) == 0);
}

//Concatenation
Mystring operator+(const Mystring &lhs,const Mystring &rhs)
{
    ssize_t buff_len = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_len];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    Mystring temp {buff};
    delete[] buff;
    return temp;
}
