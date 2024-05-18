#include "Saving_Account.h"

Saving_Account::Saving_Account(double bal,double intr_rate)
                    :Account(bal),int_rate{intr_rate}{}
Saving_Account::Saving_Account()
                    :Saving_Account(0.0,0.0){}
                    
void Saving_Account::deposit(double amount)
{
    amount = amount + (amount * int_rate/100);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os,const Saving_Account &sav_acc)
{
    os << "Saving Account Balance:" << sav_acc.balance << " Interest Rate:" << sav_acc.int_rate;
    return os;
}