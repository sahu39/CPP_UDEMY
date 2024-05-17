#include <iostream>
using namespace std;

class Base{
private:
    int value;
public:
    Base():value{0}{cout << "Default Base Constructor" << endl;}
    Base(int x):value{x}{cout << "Overloaded Base Constructor" << endl;}
    ~Base(){cout << "Base Destructor" << endl;}
};

class Derived:public Base{
private:
    int double_value;
public:
    Derived():double_value{0}{cout <<"Default Derived Constructor" << endl;}
    Derived(int x):double_value{x*2}{cout <<"Overloaded Derived Constructor" << endl;}
    ~Derived(){cout << "Derived Destructor" << endl;}
};
int main()
{
    //Base base;
    //Base base{100};
    
	//Derived d;
    Derived d{1000};
	return 0;
}
