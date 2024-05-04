#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring
{
    friend Mystring operator-(const Mystring &obj);
private:
    char *str;//Pointer to char[] which holds c-style string
public:
    Mystring();                       //Default Constructor
    Mystring(const char *s);          //Overloaded Constructor
    Mystring(const Mystring &source); //Copy Constructor
    Mystring(Mystring &&source);      //Move Constructor
    ~Mystring();                      //Destructor
    
    Mystring &operator=(const Mystring &rhs); //Copy Assisgnment
    Mystring &operator=(Mystring &&rhs);//Move Assignment
    void display() const;
    int get_length() const;
    const char *get_str() const;
    
};
#endif