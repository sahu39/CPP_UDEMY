#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string nam,double bal)
                    :Account(nam,bal){}
                    
bool Checking_Account::withdraw(double amount)
{
    return Account::withdraw(amount+withdraw_fee);
}

std::ostream &operator<<(std::ostream &os,const Checking_Account &obj)
{
    os << "[Checking_Account: " << obj.name << " : " << obj.balance << " : " << obj.withdraw_fee << "]";
    return os;
}
