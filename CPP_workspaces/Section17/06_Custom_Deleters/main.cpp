#include <iostream>
#include <Memory>

class Test{
private:
    int item;
public:
    Test():item{0}
    {
        std::cout<< "\tDefault Constructor(" << item << ")" << std::endl;
    }
    Test(int data):item{data}
    {
        std::cout<< "\tParameterized Constructor(" << item << ")" << std::endl;
    }
    ~Test()
    {
        std::cout << "\tDestructor for (" << item << ")" << std::endl;
    }
    
};
void my_deleter(Test *ptr)
{
    std::cout << "\tMy Custom Deleter" << std::endl;
    delete ptr;
}
int main()
{
	{
        std::shared_ptr<Test> p1 {new Test{1000},my_deleter};
    }
    std::cout << "===================================" << std::endl;
    {
        std::shared_ptr<Test> p2 (new Test{2000},[](Test *p)
        {
            std::cout << "\tMy Custom Deleter lambda" << std::endl;
            delete p;
        });
    }
	return 0;
}
