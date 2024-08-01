#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"

int main()
{
    try{
        std::unique_ptr<Account> acc_ptr = std::make_unique<Checking_Account>("Sunil",-3000.0);
        std::cout << *acc_ptr << std::endl;
    }
    catch(const IllegalBalanceException &ex)
    {
        std::cerr << "Could not create account - negative balance" << std::endl;
    }
    std::cout << "Program completed Successfully" << std::endl;
	return 0;
}
