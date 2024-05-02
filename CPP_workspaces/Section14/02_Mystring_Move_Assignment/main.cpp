#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
	Mystring a{"Hello"};    //Overloaded Constructor
    a = Mystring{"Holla"};  //Overloaded Constructor then Move Constructor
    a = "Bonjur";           //Overloaded Constructor then Move Constructor
	return 0;
}
