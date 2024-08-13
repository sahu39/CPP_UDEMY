#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "noboolalpha-default (10==10):" << (10==10) << std::endl;
    std::cout << "noboolalpha-default (10==20):" << (10==20) << std::endl;
    
    //Set to true/false formatting
    std::cout<< std::boolalpha; //change true/false
    std::cout << "boolalpha (10==10):" << (10==10) << std::endl;
    std::cout << "boolalpha (10==20):" << (10==20) << std::endl;
    //Setting still statys for future boolean insertions
    std::cout << "boolalpha (10==10):" << (10==10) << std::endl;
    std::cout << "boolalpha (10==20):" << (10==20) << std::endl;
    
    //toggle to 0/1
    std::cout<< std::noboolalpha; //change 1/0
    std::cout << "noboolalpha (10==10):" << (10==10) << std::endl;
    std::cout << "noboolalpha (10==20):" << (10==20) << std::endl;
    
    //Set to true false formatting using setf method.
    std::cout.setf(std::ios::boolalpha);
    std::cout << "boolalpha (10==10):" << (10==10) << std::endl;
    std::cout << "boolalpha (10==20):" << (10==20) << std::endl;
    std::cout << "boolalpha (10==10):" << (10==10) << std::endl;
    std::cout << "boolalpha (10==20):" << (10==20) << std::endl;

    //reest to defult which is 0/1
    std::cout <<  std::resetiosflags(std::ios::boolalpha);
    std::cout << "noboolalpha (10==10):" << (10==10) << std::endl;
    std::cout << "noboolalpha (10==20):" << (10==20) << std::endl;
    std::cout << "noboolalpha (10==10):" << (10==10) << std::endl;
    std::cout << "noboolalpha (10==20):" << (10==20) << std::endl;
    
    
    
  
	
	return 0;
}
