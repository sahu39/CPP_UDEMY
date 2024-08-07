#include "Saving_Account.h"
Saving_Account::Saving_Account(std::string name,double balance,double intrate)
    :Account{name,balance},int_rate{intrate}{}
    
bool Saving_Account::withdraw(double amount){
    return Account::withdraw(amount);
}
bool Saving_Account::deposit(double amount){
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}
void Saving_Account::print(std::ostream &os) const{
    os << "[Saving Account: " << name << ":" << balance << ":" << int_rate << "]";
}
