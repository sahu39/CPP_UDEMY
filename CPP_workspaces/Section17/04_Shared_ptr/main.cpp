#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

int main()
{
	std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>("Sarojini",4500,6.7);
    std::shared_ptr<Account> acc2 = std::make_shared<Savings_Account>("Rajini",3500,5.7);
    std::shared_ptr<Account> acc3 = std::make_shared<Checking_Account>("Raju",5500);
    
    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    for(const auto &acc:accounts)
    {
        std::cout << *acc << std::endl;
        std::cout << "Use Count:(" << acc.use_count() << ")" <<std::endl;
    } 
    
    
	return 0;
}
