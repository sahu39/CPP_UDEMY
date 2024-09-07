#include <iostream>
#include <iomanip>
int main()
{
    int num {255};
	std::cout << "\n=========================\n";
    std::cout << "Enter a num:" ;
    std::cin >> num;
    //Show base(0x-->for Hex,O-->for Octal) and show hexdecimals in uppercase
    std::cout << std::showbase << std::uppercase;
    std::cout << "Number in Decimal:" << std::dec << num << std::endl;
    std::cout << "Number in HexaDecimal:" << std::hex << num << std::endl;
    std::cout << "Number in Octal:" << std::oct << num << std::endl;
    
	return 0;
}
