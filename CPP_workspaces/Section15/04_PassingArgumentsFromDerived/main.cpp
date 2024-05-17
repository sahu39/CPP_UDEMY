#include <iostream>
using namespace std;

class Base{
private:
    int val;
public:
    Base():val{0}{cout << "Base no-arg constructor" << endl;}
    Base(int x):val{x}{cout << "Base (int) overloaded constructor" << endl;}
    ~Base(){cout << "Base destructor" << endl;}
};

class Derived:public Base{
private:
    int doubled_val;
public:
    Derived()
        :Base{},doubled_val{0}
    {
        cout << "Derived no-arg constructor" << endl;
    }
    Derived(int x)
        :Base{x},doubled_val{x*2}
    {
        cout << "Derived (int) overloaded constructor" << endl;
    }
    ~Derived(){cout << "Derived destructor" << endl;}
};

int main()
{
	//Derived d;
    Derived d{100};
	return 0;
}
