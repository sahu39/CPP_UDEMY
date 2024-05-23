#include <iostream>
#include <memory>

class Base{
public:
    void say_hello() const{
        std::cout << "Hello-I'm a base class object" << std::endl;
    };
};

class Derived : public Base{
public:
    void say_hello() const{
        std::cout << "Hello-I'm a derived class object" << std::endl;
    };
};

void display_hello(const Base &base)
{
    std::cout << "Greeetings:";
    base.say_hello();
}

int main()
{
	Base b;
    b.say_hello();  //Hello-I'm a base class object
    
    Derived d;
    d.say_hello();  //Hello-I'm a derived class object
    
    display_hello(b);//Greeetings:Hello-I'm a base class object
    display_hello(d);//Greeetings:Hello-I'm a base class object
    
    Base *ptr = new Derived();
    ptr->say_hello();//Hello-I'm a base class object
    
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello();
    delete ptr;      //Hello-I'm a base class object
	return 0;
}