#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string nam,double balance)
    :Account{nam,balance}{}
    
bool Checking_Account::withdraw(double amount)
{
    amount += per_check_fee;
    return Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const
{
    os << "[Checking_Account: " << name << ":" << balance << "]";
}
