#ifndef _CHECKING_ACC_H
#define _CHECKING_ACC_H
#include <string>
#include "Account.h"
class Checking_Account : public Account{
    friend std::ostream &operator<<(std::ostream &os,const Checking_Account &obj);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr const double def_bal = 0.0;
    static constexpr const double withdraw_fee = 1.50;
public:
    Checking_Account(std::string nam=def_name,double bal=def_bal);
    bool withdraw(double amount);
};
#endif