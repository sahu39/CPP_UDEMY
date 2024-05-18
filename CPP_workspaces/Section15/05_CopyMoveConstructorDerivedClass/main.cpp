#include <iostream>
using namespace std;

class Base{
private:
    int val;
public:
    Base():val{0}{cout << "Base no-arg constructor" << endl;}
    Base(int x):val{x}{cout << "Base (int) overloaded constructor" << endl;}
    Base(const Base &rhs)
        :val{rhs.val}
    {
        cout <<"Base Copy Constructor" << endl;
    }
    //Overloaded operator=
    Base &operator=(const Base &rhs)
    {
        if(this != &rhs)
        {
            this->val = rhs.val;
        }
        return *this;
    }
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
    Derived(const Derived &other)
        :Base(other),doubled_val{other.doubled_val}
    {
        cout << "Derived Copy Constructor" << endl;
    }
    Derived &operator=(const Derived &rhs)
    {
        if(this != &rhs)
        {
            Base::operator =(rhs);
            doubled_val = rhs.doubled_val;
        }
        return *this;
    }
    ~Derived(){cout << "Derived destructor" << endl;}
};

int main()
{
	//Derived d;
    Derived d{100};
    Derived d1{d};
    d1 = d;
	return 0;
}
