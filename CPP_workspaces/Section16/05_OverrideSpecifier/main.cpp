#include <iostream>

class Base{
public:
    virtual void say_hello() const{
        std::cout << "Base::" << __func__ << " is called" << std::endl;
    }
    virtual ~Base() {std::cout<< __func__ << std::endl;}
};
class Derived : public Base{
public:
    virtual void say_hello() const override{  //Forget the const so not overriding
        std::cout << "Derived::" << __func__ << " is called" << std::endl;
    }
    virtual ~Derived()  {std::cout<< __func__ << std::endl;}
};

int main()
{
	Base *b = new Base();
    b->say_hello();
    
    Derived *d = new Derived();
    d->say_hello();
    
    Base *derived =  new Derived();
    derived->say_hello();
    
    delete b;
    delete d;
    delete derived;
	return 0;
}