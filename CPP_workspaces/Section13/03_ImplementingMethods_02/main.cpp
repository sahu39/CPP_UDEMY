#include <iostream>
#include "Account.h"
int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if(frank_account.deposit(200))
        std::cout << "Deposit OK" << std::endl;
    else
        std::cout << "Deposit Not allowed" << std::endl;
    
    if(frank_account.withdraw(500))
        std::cout << "Withdraw OK" << std::endl;
    else
        std::cout << "Not Sufficient funds" << std::endl;
        
    if(frank_account.withdraw(1500))
        std::cout << "Withdraw OK" << std::endl;
    else
        std::cout << "Not Sufficient funds" << std::endl;
	return 0;
}
