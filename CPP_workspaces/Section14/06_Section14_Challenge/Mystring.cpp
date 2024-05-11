#include "Mystring.h"

Mystring::Mystring()
    :str{nullptr}{
        std::cout<<"Default Constructor"<<std::endl;
}

Mystring::Mystring(const char *source)
    :str{nullptr}{
        std::cout<<"Overloaded Constructor"<<std::endl;
        if(source == nullptr)
        {
            str = new char[1];
            *str = '\0';
        }
        else
        {
            str = new char[std::strlen(source)+1];
            std::strcpy(this->str,source);
        }
}

Mystring::Mystring(const Mystring &lhs)
    :str(nullptr)
{
    //std::cout<<"Copy Constructor" << endl;
    str = new char[std::strlen(lhs.str)+1];
    std::strcpy(str,lhs.str);
}

Mystring::Mystring(Mystring &&rhs)
{
    str = rhs.str;
    rhs.str = nullptr;
}
Mystring::~Mystring()
{
    delete[] str;
}




Mystring & Mystring::operator=(const Mystring &rhs)
{
    if(this == &rhs)
        return *this;
    
    delete[] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str,rhs.str);
    return *this;
}

Mystring & Mystring::operator=(Mystring &&rhs)
{
    if(this == &rhs)
    {
        return *this;
    }
    delete[] this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}
Mystring Mystring::operator-() const
{
    char *buff = new char[std::strlen(str)+1];
    for(size_t i=0; i<std::strlen(str); i++)
    {
        buff[i] = std::tolower(str[i]);
    }
    Mystring temp{buff};
    delete[] buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs) const
{
    return(std::strcmp(str,rhs.str) == 0);
}

bool Mystring::operator!=(const Mystring &rhs) const
{
    return(std::strcmp(str,rhs.str));
}

bool Mystring::operator>(const Mystring &rhs) const
{
    if(str[0] > rhs.str[0])
        return true;
    else
        return false;
}
bool Mystring::operator<(const Mystring &rhs) const
{
    if(str[0] < rhs.str[0])
        return true;
    else
        return false;
}

Mystring Mystring::operator+(const Mystring &rhs)
{
    ssize_t buff_len = std::strlen(this->str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_len];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    Mystring temp {buff};
    delete[] buff;
    return temp;
}


Mystring &Mystring::operator+=(const Mystring &rhs)
{
    ssize_t buff_len = std::strlen(this->str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_len];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    delete[] this->str;
    str = new char[buff_len];
    std::strcpy(str,buff);
    delete[] buff;
    return *this;
}


Mystring Mystring::operator*(int num)
{
    ssize_t buff_len = (std::strlen(str) * num ) + 1;
    char *buff = new char[buff_len];
    std::strcpy(buff,str);
    for(int i=0; i<(num-1); i++)
    {
        std::strcat(buff,str);
    }
    Mystring temp {buff};
    delete[] buff;
    return temp;
}

Mystring &Mystring::operator*=(int num)
{
    *this = *this * num;
    return *this;
}

Mystring &Mystring::operator++()
{
    for(size_t i=0; i<= std::strlen(str); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return *this;
}

Mystring Mystring:: operator++(int)
{
    Mystring temp {*this};
    operator++();
    return temp;
}
