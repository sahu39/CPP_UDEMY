#include <iostream>
#include "Account.h"

Account::Account()
    :balance{0.0},name{"An Account"}
{
}
Account::~Account(){}

void Account::deposit(double amt)
{
    std::cout << "Account deposit called with:" << amt << std::endl;
}

void Account::withdraw(double amt)
{
    std::cout << "Account withdraw called with:" << amt << std::endl;
}
