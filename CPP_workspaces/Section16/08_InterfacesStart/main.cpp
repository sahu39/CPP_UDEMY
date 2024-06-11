#include <iostream>

class Account{
    friend std::ostream &operator<<(std::ostream &os,const Account &acc);
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Account::" << __func__ << std::endl;
    }
    virtual ~Account(){std::cout << "Account Destructor" << std::endl;}
    
};
std::ostream &operator<<(std::ostream &os,const Account &acc)
{
    os << "Account display";
    return os;
}

class Checking : public Account{
    friend std::ostream &operator<<(std::ostream &os,const Checking &acc);
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Checking::" << __func__ << std::endl;
    }
    virtual ~Checking(){std::cout << "Checking Destructor" << std::endl;}
    
};
std::ostream &operator<<(std::ostream &os,const Checking &acc)
{
    os << "Checking display";
    return os;
}

class Saving : public Account{
    friend std::ostream &operator<<(std::ostream &os,const Saving &acc);
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In SAving::" << __func__ << std::endl;
    }
    virtual ~Saving(){std::cout << "Saving Destructor" << std::endl;}
    
};
std::ostream &operator<<(std::ostream &os,const Saving &acc)
{
    os << "Saving display";
    return os;
}
class Trust : public Account{
    friend std::ostream &operator<<(std::ostream &os,const Trust &acc);
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Trust::" << __func__ << std::endl;
    }
    virtual ~Trust(){std::cout << "Trust Destructor" << std::endl;}
    
};
std::ostream &operator<<(std::ostream &os,const Trust &acc)
{
    os << "Trust display";
    return os;
}
int main()
{
    Account *a = new Account();
    std::cout << *a << std::endl;
    
    Account *b = new Account();
    std::cout << *b << std::endl;
    /*
	Account a;
    std::cout << a << std::endl;
    
    Checking b;
    std::cout << b << std::endl;
    
    Saving c;
    std::cout << c << std::endl;
    
    Trust d;
    std::cout << d << std::endl;
     */
	return 0;
}
