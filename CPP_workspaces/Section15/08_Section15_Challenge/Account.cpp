#include "Account.h"

Account::Account(std::string nam,double bal)
            :name{nam},balance{bal}{}
            
bool Account::deposit(double amt)
{
    if(amt > 0)
    {
        balance += amt;
        return true;
    }
    return false;
}

bool Account::withdraw(double amt)
{
    if((balance-amt) > 0)
    {
        balance -= amt;
        return true;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os,const Account &acc)
{
    os << "[Account: " << acc.name << " : " << acc.balance << "]";
    return os;
}