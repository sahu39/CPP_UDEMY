#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"

int main()
{
	std::unique_ptr<Account> acc_ptr = std::make_unique<Checking_Account>("Sunil",3000.0);
	return 0;
}
