#include <iostream>
void lfunc(int &num);
void rfunc(int &&num);
int main()
{
	std::cout << "My Template" << std::endl;
    int x = 10;
    lfunc(x);
    lfunc(100);//error ;  cannot bind non-const lvalue reference of type 'int&' of type 'int&' to an rvalue of type 'int'
    rfunc(200);
   // rfunc(x);//error : cannot bind rvalue reference of type 'int &&' to lvalue of type 'int'
	return 0;
}
void lfunc(int &num){
    std::cout<<"L-value e.g:" << num << std::endl;
}
void rfunc(int &&num){
    std::cout << "R-value e.g:"<< num << std::endl;
}