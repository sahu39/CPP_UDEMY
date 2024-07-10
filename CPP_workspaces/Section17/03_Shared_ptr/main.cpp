#include <iostream>
#include <memory>
#include <vector>

class Test{
private:
    int num;
public:
    Test(int n):num{n}
    {
        std::cout << "Test Construction:(" <<  num << ")" << std::endl;
    }
    ~Test()
    {
        std::cout << "Test Destructor:(" <<  num << ")" << std::endl;
    }
};
void func(std::shared_ptr<Test> ptr)
{
    std::cout << "Use count:(" << ptr.use_count() <<")" << std::endl;
}
int main()
{
    //use_count - the number of shared_ptr object
    //managing the heap object
    
    std::shared_ptr<int>p1{new int{100}};
    std::cout << "Use count:" << p1.use_count() << std::endl;   //1

    std::shared_ptr<int>p2{p1};
    std::cout << "Use count:" << p1.use_count() << std::endl;   //2
    
    p1.reset();
    std::cout << "Use count:" << p1.use_count() << std::endl;   //0
    std::cout << "Use count:" << p2.use_count() << std::endl;   //1
    
    std::shared_ptr<Test>ptr1{new Test{1000}};
    std::cout << "Use count:(" << ptr1.use_count() << ")" << std::endl;
    func(ptr1);
    {
        std::shared_ptr<Test> ptr2 = ptr1;
        std::cout << "Use count:(" << ptr1.use_count() << ")" << std::endl;
        {
            std::shared_ptr<Test> ptr3 = ptr1;
            std::cout << "Use count:(" << ptr1.use_count() << ")" << std::endl;
            ptr1.reset();
        }
        std::cout << "Use count:(" << ptr1.use_count() << ")" << std::endl;
        
    }
    std::cout << "Use count:(" << ptr1.use_count() << ")" << std::endl;
    
    
	return 0;
}
