#include <iostream>
#include "Mystring.h"
using namespace std;
int main()
{
    Mystring Larry1 {"LARRY"};
    Mystring Larry2;
    Larry2 = -Larry1; //Operator- overloading for lowercase conversion
    Larry1.display();
    Larry2.display();
    
    Mystring mystr1 {"Sunil"};
    Mystring mystr2 {"Larry"};
    if(mystr1 == mystr2)////Operator== overloading
    {
        std::cout << "Equal" << std::endl;
    }
    else
    {
        std::cout << "Not Equal" << std::endl;
    }
        
	return 0;
}
