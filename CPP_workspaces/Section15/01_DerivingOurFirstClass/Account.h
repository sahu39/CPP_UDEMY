#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account{
public:
    double balance;
    std::string name;
    Account();
    ~Account();
    
    void deposit(double);
    void withdraw(double);
};
#endif