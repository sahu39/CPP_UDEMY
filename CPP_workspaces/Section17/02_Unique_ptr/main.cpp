#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
int main()
{
	std::unique_ptr<Account> a1 {new Checking_Account("Sunil",5000)};
    std::cout << *a1 << std::endl;
    
    std::vector<std::unique_ptr<Account>> accounts;
    accounts.push_back(std::make_unique<Checking_Account>("Batman",5000));
    accounts.push_back(std::make_unique<Savings_Account>("Wonder Woman",6000,5.2));
    accounts.push_back(std::make_unique<Trust_Account>("Super man",7000,4.5));
    
    
    for(const auto &acc:accounts)
    {
        std::cout << *acc << std::endl;
    }
	return 0;
}
