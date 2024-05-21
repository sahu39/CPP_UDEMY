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
    
    //Checking Accounts
    vector<Checking_Account> chk_account;
    chk_account.push_back(Checking_Account {});
    chk_account.push_back(Checking_Account {"Superman"});
    chk_account.push_back(Checking_Account {"Batman",2000});
    chk_account.push_back(Checking_Account {"Wonderwoman",5000});
    
    display(chk_account);
    deposit(chk_account, 1000);
    withdraw(chk_account, 2000); 

    //Trust Accounts
    vector<Trust_Account> tr_account;
    tr_account.push_back(Trust_Account {});
    tr_account.push_back(Trust_Account {"Superman"});
    tr_account.push_back(Trust_Account {"Batman",2000});
    tr_account.push_back(Trust_Account {"Wonderwoman",5000,5.0});
    
    display(tr_account);
    deposit(tr_account, 1000);
    withdraw(tr_account, 2000);
    withdraw(tr_account, 500);
    withdraw(tr_account, 500);
    withdraw(tr_account, 500);
    withdraw(tr_account, 500);
    
	return 0;
}
