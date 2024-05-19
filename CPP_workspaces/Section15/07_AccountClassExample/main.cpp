#include <iostream>
#include "Account_Util.h"

using namespace std;
int main()
{
	//Accounts
    vector<Account> account;
    account.push_back(Account {});
    account.push_back(Account {"Sunil"});
    account.push_back(Account {"Swagat",2000});
    account.push_back(Account {"Geeta",5000});
    
    display(account);
    deposit(account, 1000);
    withdraw(account, 2000);

	//Saving Accounts
    vector<Saving_Account> sav_account;
    sav_account.push_back(Saving_Account {});
    sav_account.push_back(Saving_Account {"Superman"});
    sav_account.push_back(Saving_Account {"Batman",2000});
    sav_account.push_back(Saving_Account {"Wonderwoman",5000,5.0});
    
    display(sav_account);
    deposit(sav_account, 1000);
    withdraw(sav_account, 2000);    
    
	return 0;
}
