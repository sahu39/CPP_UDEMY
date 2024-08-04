#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
int main()
{
	std::unique_ptr<Account> chk_acc = std::make_unique<Checking_Account>("Sunil",-1000);
    std::cout << *chk_acc << std::endl;
	return 0;
}
