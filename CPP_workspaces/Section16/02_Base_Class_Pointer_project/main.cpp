#include <iostream>
#include <vector>
class Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "Account class:" << __func__ << ":" << balance << std::endl;
    }
};

class Saving_Account : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "Saving_Account class:" << __func__ << ":" << balance << std::endl;
    }
};

class Checking_Account : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "Checking_Account class:" << __func__ << ":" << balance << std::endl;
    }
};

class Trust_Account : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "Trust_Account class:" << __func__ << ":" << balance << std::endl;
    }
};

int main()
{
	Account *p1 = new Account();
    Account *p2 = new Saving_Account();
    Account *p3 = new Checking_Account();
    Account *p4 = new Trust_Account();
    
    std::cout << "===========Pointers==========" << std::endl;
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    std::cout << "===========Array==========" << std::endl;
    Account *account [] = {p1,p2,p3,p4};
    
    for(auto i=0 ; i<4; i++)
        account[i]->withdraw(1000);
        
    std::cout << "==========Vetor===========" << std::endl;
    std::vector <Account *> acc_vec {p1,p2,p3,p4};
    for(auto acc:acc_vec)
        acc->withdraw(1000);
        
    acc_vec.push_back(p4);
    acc_vec.push_back(p4);
    for(auto acc:acc_vec)
        acc->withdraw(1000);
    //delete p1;
    //delete p2;
    //delete p3;
    //delete p4;
    
	return 0;
}
