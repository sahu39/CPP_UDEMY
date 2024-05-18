#include "Account.h"

Account::Account(double bal):balance{bal}{}
Account::Account():Account(0.0){}//Delegating Constructor

void Account::deposit(double bal)
{
    balance+=bal;
}

void Account::withdraw(double amt)
{
    if(balance-amt > 0)
    {
        balance-=amt;
    }
    else
    {
        std::cout << "Insufficient Balance" << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os,const Account &acc)
{
    os << "Account Balance:" << acc.balance;
    return os;
}