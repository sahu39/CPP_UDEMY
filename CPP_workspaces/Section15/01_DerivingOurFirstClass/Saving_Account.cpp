#include <iostream>
#include "Saving_Account.h"

Saving_Account::Saving_Account(){}
Saving_Account::~Saving_Account(){}

void Saving_Account::deposit(double amt)
{
    std::cout << "Saving Account deposit called with:" << amt << std::endl;
}

void Saving_Account::withdraw(double amt)
{
    std::cout << "Saving Account withdraw called with:" << amt << std::endl;
}
