#include <iostream>

class Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Account::" << __func__ << std::endl;
    }
    virtual ~Account(){}
};

class Saving : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Saving::" << __func__ << std::endl;
    }
    virtual ~Saving(){}
};

class Checking : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Checking::" << __func__ << std::endl;
    }
    virtual ~Checking(){}
};

class Trust : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Trust::" << __func__ << std::endl;
    }
    virtual ~Trust(){}
};
void do_withdraw(Account &account,double amount)
{
    account.withdraw(amount);
}
int main()
{
	Account a;
    Account &ref = a;
    ref.withdraw(1000);
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(2000);
    
    Account a1;
    Saving a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1,2000);
    do_withdraw(a2,3000);
    do_withdraw(a3,3000);
    do_withdraw(a4,6000);
	return 0;
}
