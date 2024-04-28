#include <iostream>
#include <vector>
#include "Mystring.h"
using namespace std;
int main()
{

    
    Mystring a{"Hello"}; //overloaded Constructor
    Mystring b;          //no-args Constrctor
    b = a;               //copy assignment
                         //b.operator=(a)
    b = "This is a Test"; //b.operator=("This is a test")
    
    Mystring empty;             //no-args Constructor
    Mystring larry("Larry");    //Overloaded Constructor
    Mystring stooge(larry);     //Copy Constructor
    Mystring stooges;
    
    empty = stooge;             //Copy Assignment operator
    
    empty.display();            //Larry:5
    larry.display();            //Larry:5
    stooge.display();           //Larry:5
    empty.display();            //Larry:5
    
    stooges = "Larry,Moe,and Curly";
    stooges.display();          //Larry,Moe,and Curly:19
    
    vector <Mystring> stooge_vec;
    stooge_vec.push_back("Larry");
    stooge_vec.push_back("Moe");
    stooge_vec.push_back("Curly");
    
    std::cout << "======Loop1=================" << std::endl;
    for(const auto &s:stooge_vec)
    {
        s.display();
    }
    
    std::cout << "======Loop2=================" << std::endl;
    for(auto &s:stooge_vec)
    {
        s = "changed";          //Copy Assignment Opearator
    }
    std::cout << "======Loop3=================" << std::endl;
    for(const auto &s:stooge_vec)
    {
        s.display();
    }
	return 0;
}
