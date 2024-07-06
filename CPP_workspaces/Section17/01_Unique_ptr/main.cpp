#include <iostream>
#include <memory>
class Test{
private:
    int data;
public:
    Test():data{0}
    {
        std::cout << "Default Test constructor(" << data <<")" << std::endl;
    }
    Test(int data):data{data}
    {
        std::cout << "Parameterized Test Constructor(" << data << ")" << std::endl;
    }
    int get_data(){return data;}
    ~Test()
    {
        std::cout << "Test destructor(" << data << ")" << std::endl;
    }
};
int main()
{
    Test t1{1000};
    //std::unique_
    //Test *T2 = new Test{2000};//only constructor is called no destructor is called
    std::unique_ptr<Test> p1 {new Test{2000}};
    std::unique_ptr<Test> p2 = std::make_unique<Test>(3000);
    
    std::unique_ptr<Test> p3;//
    //p3 = p1;////error: use of deleted function 'std::unique_ptr<_Tp, _Dp>& std::unique_ptr<_Tp, _Dp>::operator=(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = Test; _Dp = std::default_delete<Test>]'
    p3 = std::move(p1);//Transfer ownership of p1 to p3 now p1 is nullptr
    if(!p1)
    {
        std::cout << "p1 is nullptr" << std::endl;
    }
        
	return 0;
}
