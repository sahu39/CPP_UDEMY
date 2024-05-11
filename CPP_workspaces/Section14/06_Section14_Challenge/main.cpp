#include <iostream>
#include "Mystring.h"
using namespace std;
int main()
{
    Mystring s1 {"HELLO"};
    Mystring s2 = -s1;
    if(s1 == s2)
            std::cout<< "Equal" << std::endl;
    else
            std::cout<< "Not Equal" << std::endl;
    s1+=s2;
    
    s1 = s2 * 2;
    ++s1;
    s1*=2;
    Mystring result = s1++;
	return 0;
}
