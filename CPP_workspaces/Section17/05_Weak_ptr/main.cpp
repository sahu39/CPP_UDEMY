#include <iostream>
#include <memory>

using namespace std;

class B;    //Forward Declaration

class A{
    shared_ptr<B> b_ptr;
public:
    void set_B(shared_ptr<B> &bptr)
    {
        b_ptr = bptr;
    }
    
    A(){cout << "A Constructor" << endl;}
    ~A(){cout << "A Destructor" << endl;}
};

class B{
    //shared_ptr<A> a_ptr;    //make weak to break the strong circular reference
                              //Otherwise memory leak will happen.
                              //Destructor never got calls
    weak_ptr<A> a_ptr;
public:
    void set_A(shared_ptr<A> &aptr)
    {
        a_ptr = aptr;
    }
    
    B(){cout << "B Constructor" << endl;}
    ~B(){cout << "B Destructor" << endl;}
};
int main()
{
    std::shared_ptr<A> aptr = std::make_shared<A>();
    std::shared_ptr<B> bptr = std::make_shared<B>();
    aptr->set_B(bptr);
    bptr->set_A(aptr);
	return 0;
}
