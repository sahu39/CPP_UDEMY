
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string nm, double bal, double rate)
                :Saving_Account(nm,bal,rate),count_withdraw{0}{}

// Deposit additional $50 bonus when amount >= $5000
bool Trust_Account::deposit(double amount) {
    if (amount >= 5000.0)
        amount += def_bonus;
    return Saving_Account::deposit(amount);
}
    
// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_Account::withdraw(double amount) {
    if (count_withdraw >= def_withdraw || (amount > balance * def_withdraw_rate))
        return false;
    else {
        ++count_withdraw;
        return Saving_Account::withdraw(amount);
    }
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &obj)
{
    os << "[Trust Account: " << obj.name << " : " << obj.balance << " : " << obj.int_rate << "% withdraw_count: " << obj.count_withdraw <<"]";
    return os;
}