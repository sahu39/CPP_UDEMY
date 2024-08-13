#include <iostream>
#include <iomanip>
int main()
{
	int num {255};
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    //showbase
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    std::cout << std::showbase << std::uppercase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    std::cout << "\n=========================\n";
    std::cout << "Enter a num:" ;
    std::cin >> num;
    std::cout << "Number in Decimal:" << std::dec << num << std::endl;
    std::cout << "Number in Hexa Decimal:" << std::hex << num << std::endl;
    std::cout << "Number in Octal:" << std::oct << num << std::endl;
    
	return 0;
}
