#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
class Account{
    friend std::ostream &operator<<(std::ostream &os,const Account &);
protected:
    double balance;
public:
    Account();
    Account(double bal);
    void deposit(double);
    void withdraw(double);
};
#endif