#include "Account_Util.h"

void display(const std::vector<Account> &accounts)
{
    std::cout << "\n================Accounts===================" << std::endl;
    for(const auto &acc:accounts)
        std::cout << acc << std::endl;
}
void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n================Deposit Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            std::cout <<"Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout <<"Failed Deposit off " << amount << " to " << acc << std::endl;
    }
}
void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n================Withdraw Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            std::cout <<"Withdraw of Amount: "<< amount << " from " << acc << std::endl;
        else
            std::cout <<"Failure to withdraw Amount: " << amount << " from " << acc << std::endl;
    }
}
//Saving Accounts
void display(const std::vector<Saving_Account> &accounts)
{
    std::cout << "\n================Saving Accounts===================" << std::endl;
    for(const auto &acc:accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Saving_Account> &accounts, double amount)
{
    std::cout << "\n================Deposit Saving Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            std::cout <<"Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout <<"Failed Deposit off " << amount << " to " << acc << std::endl;
    }
}
void withdraw(std::vector<Saving_Account> &accounts, double amount)
{
    std::cout << "\n================Deposit Withdraw Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            std::cout <<"Withdraw of Amount: "<< amount << " from " << acc << std::endl;
        else
            std::cout <<"Failure to withdraw Amount: " << amount << " from " << acc << std::endl;
    }
}

//Checking Accounts
void display(const std::vector<Checking_Account> &accounts)
{
    std::cout << "\n================Checking Accounts===================" << std::endl;
    for(const auto &acc:accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n================Deposit Checking Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            std::cout <<"Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout <<"Failed Deposit off " << amount << " to " << acc << std::endl;
    }
}
void withdraw(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n================Withdraw Checking Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            std::cout <<"Withdraw of Amount: "<< amount << " from " << acc << std::endl;
        else
            std::cout <<"Failure to withdraw Amount: " << amount << " from " << acc << std::endl;
    }
}
//Trust_Account
void display(const std::vector<Trust_Account> &accounts)
{
    std::cout << "\n================Trust Accounts===================" << std::endl;
    for(const auto &acc:accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n================Deposit Trust Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.deposit(amount))
            std::cout <<"Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout <<"Failed Deposit off " << amount << " to " << acc << std::endl;
    }
}
void withdraw(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n================Withdraw Trust Accounts===================" << std::endl;
    for(auto &acc:accounts)
    {
        if(acc.withdraw(amount))
            std::cout <<"Withdraw of Amount: "<< amount << " from " << acc << std::endl;
        else
            std::cout <<"Failure to withdraw Amount: " << amount << " from " << acc << std::endl;
    }
}