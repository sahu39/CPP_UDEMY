#include "Saving_Account.h"

Saving_Account::Saving_Account(std::string name,double amt,double rate)
                    :Account(name,amt),int_rate{rate}{}
                    
bool Saving_Account::deposit(double amt)
{
    amt = amt + (amt * int_rate/100);
    return Account::deposit(amt);
}

std::ostream &operator<<(std::ostream &os, const Saving_Account &sav_acc)
{
    os << "[Saving Account: " << sav_acc.name << " : " << sav_acc.balance << " : " << sav_acc.int_rate <<"%]";
    return os;
}