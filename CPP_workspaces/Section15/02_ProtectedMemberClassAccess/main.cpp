#include <iostream>
using namespace std;

class Base{
public:
    int a {0};
    void display_objects()
    {
        cout << a << b << c << endl;
    }
protected:
    int b {0};
private:
    int c {0};
};

class Derived:public Base{
public:
    void access_base_members()
    {
        a = 200;//Ok//public
        b = 300;//Ok//protected
       // c = 400;//Compilation error//'int Base::c' is private within this context
    }
};
int main()
{
    Base base;
    base.a = 100;//OK
//    base.b = 200;//Compilation error//'int Base::b' is protected within this context
//    base.c = 300;//Compilation error//'int Base::c' is private within this context
	Derived d;
    d.a = 200;
//    d.b = 300;//Compilation error//'int Base::b' is protected within this context
//    d.c = 500;//Compilation error//'int Base::c' is private within this context
	return 0;
}
