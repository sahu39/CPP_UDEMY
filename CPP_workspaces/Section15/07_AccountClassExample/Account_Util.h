#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include "Account.h"
#include "Saving_Account.h"
#include <vector>
//Utility helper function for Account class objects
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &, double amount);
void withdraw(std::vector<Account> &, double amount);
//Utility helper function for Saving_Account class objects
void display(const std::vector<Saving_Account> &accounts);
void deposit(std::vector<Saving_Account> &, double amount);
void withdraw(std::vector<Saving_Account> &, double amount);
#endif