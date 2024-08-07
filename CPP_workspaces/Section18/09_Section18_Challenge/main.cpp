#include <iostream>
#include <memory>
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"

int main()
{
    try{
        std::unique_ptr<Account> sav_acc = std::make_unique<Saving_Account>("Sunil",2000,5.7);
        std::cout << *sav_acc << std::endl;
        std::unique_ptr<Account> check_acc = std::make_unique<Checking_Account>("Sunil",5000);
        std::cout << *check_acc << std::endl;
        check_acc->withdraw(4000);
        std::cout << *check_acc << std::endl;
        check_acc->withdraw(4000);
        std::cout << *check_acc << std::endl;
    }
    catch(IllegalBalanceException &ex)
    {
        std::cout<< ex.what() << std::endl;
    }
    catch(IllegalWithdrawException &ex)
    {
        std::cout<< ex.what() << std::endl;
    }

	return 0;
}
