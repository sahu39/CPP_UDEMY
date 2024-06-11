#include <iostream>
class I_Printable{
    friend std::ostream &operator<<(std::ostream &os,const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os,const I_Printable &obj)
{
    obj.print(os);
    return os;
}

class Account : public I_Printable{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Account::" << __func__ << std::endl;
    }
    virtual void print(std::ostream &os) const override
    {
        std::cout << "Account Display";
    }
    virtual ~Account(){std::cout << "Account Destructor" << std::endl;}
    
};


class Checking : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Checking::" << __func__ << std::endl;
    }
    virtual void print(std::ostream &os) const override
    {
        std::cout << "Checking Display";
    }
    virtual ~Checking(){std::cout << "Checking Destructor" << std::endl;}
    
};

class Saving : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In SAving::" << __func__ << std::endl;
    }
    virtual void print(std::ostream &os) const override
    {
        std::cout << "Saving Display";
    }
    virtual ~Saving(){std::cout << "Saving Destructor" << std::endl;}
    
};

class Trust : public Account{
public:
    virtual void withdraw(double balance)
    {
        std::cout << "In Trust::" << __func__ << std::endl;
    }
    virtual void print(std::ostream &os) const override
    {
        std::cout << "Trust Display";
    }
    virtual ~Trust(){std::cout << "Trust Destructor" << std::endl;}
    
};

class Dog : public I_Printable{
public:
    virtual void print(std::ostream &os) const override
    {
        std::cout << "Woof Woof";
    }
};

void Print(const I_Printable &obj)
{
    std::cout << obj << std::endl;
}

int main()
{
    Dog *dog = new Dog();
    std::cout << *dog << std::endl;
    
    Print(*dog);
    
    Account *a = new Account();
    std::cout << *a << std::endl;
    
    Account *b = new Account();
    std::cout << *b << std::endl;
    
    Account *c = new Checking();
    Print(*c);

    Account *d = new Saving();
    Print(*d);
    
    Account *e = new Trust();
    Print(*e);

    
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
