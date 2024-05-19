#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
class Account{
    friend std::ostream &operator<<(std::ostream &os,const Account &acc);
private:
    static constexpr const char *def_name = "defalut_name";
    static constexpr const double def_bal = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name=def_name,double bal=def_bal);
    bool deposit(double);
    bool withdraw(double);
    double getbalance() const{return balance;}
};
#endif