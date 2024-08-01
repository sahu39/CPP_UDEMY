#include "Account.h"

Account::Account(std::string nam,double bal)
    :name{nam},balance{bal}{
        if(balance < 0.0)
            throw IllegalBalanceException{};
}
    
bool Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if((balance-amount) > 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

void Account::print(std::ostream &os) const
{
    os << "[Account:" << name << ":" << balance << "]";
}

std::ostream &operator<<(std::ostream &os,const I_printable &obj)
{
    obj.print(os);
    return os;
}