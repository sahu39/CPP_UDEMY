#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
	Mystring Jolly {"Jolly"};
    Mystring Jully {"Jully"};
    cout << Jolly << Jully << endl; //JollyJully
    
    Mystring Dolly;
    cin >> Dolly;
    cout << Dolly << endl;
    
	return 0;
}
