#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
#include <string>
#include "IllegalBalanceException.h"
#include "IllegalWithdrawException.h"


class I_printable{
    friend std::ostream& operator<<(std::ostream &os, const I_printable &obj);
public:
    I_printable() = default;
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_printable() = default;
};
class Account:public I_printable{
private:
    static constexpr const char *def_name = "Default Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name=def_name,double balance=def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream &os) const override;
    virtual ~Account() = default;
};
#endif