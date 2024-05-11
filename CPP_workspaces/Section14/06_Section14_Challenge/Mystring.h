#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <iostream>
#include <cstring>

class Mystring{
private:
    char *str;
public:
    Mystring();                     //Default Constructor
    Mystring(const char *s);        //Overloaded Constructor
    Mystring(const Mystring &lhs);  //copy constructor
    Mystring(Mystring &&rhs);       //move constructor
    ~Mystring();
    
    Mystring &operator=(const Mystring &);
    Mystring &operator=(Mystring &&);
    //lowercase version of the object's string
    Mystring operator-() const;
    //Comparing 2 classs objects
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs) const;
    bool operator<(const Mystring &rhs) const;
    //concatenation. Returns an object that concatenates the lhs and rhs
    Mystring operator+(const Mystring &rhs); 
    //concatenate the rhs string to the lhs string and store the result in lhs object
    Mystring &operator+=(const Mystring &rhs);
    //repeat -  results in a string that is copied n times
    Mystring operator*(int num);
    Mystring &operator*=(int num);
    Mystring &operator++();
    Mystring operator++(int);
};
#endif