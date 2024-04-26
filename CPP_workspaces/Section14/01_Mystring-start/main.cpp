#include <iostream>
#include "Mystring.h"
using namespace std;
int main()
{
    Mystring empty;
    Mystring larry("larry");
    Mystring stooge(larry);
    
    empty.display();
    larry.display();
    stooge.display();
    
    Mystring a{"Hello"}; //overloaded Constructor
    Mystring b;          //no-args Constrctor
    b = a;               //copy assignment
                         //b.operator=(a)
    b = "This is a Test"; //b.operator=("This is a test")
    
	
	return 0;
}
