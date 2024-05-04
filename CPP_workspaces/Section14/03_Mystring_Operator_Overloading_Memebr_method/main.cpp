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
	return 0;
}
