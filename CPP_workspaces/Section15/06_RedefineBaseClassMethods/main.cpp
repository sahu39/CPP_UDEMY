#include <iostream>
#include "Account.h"
#include "Saving_Account.h"
using namespace std;
int main()
{
	cout << "\n=============Account class==================" << endl;
    Account acc1{1000.0};
    cout << acc1 << endl;
    
    acc1.deposit(500.0);
    cout << acc1 << endl;
    
    acc1.withdraw(1000);
    cout << acc1 << endl;
    
    acc1.withdraw(5000);
    cout << acc1 << endl;
    
    cout << "\n=============Saving Account class==================" << endl;
    Saving_Account s1{1000.0,5.0};
    cout << s1 << endl;
    
    s1.deposit(1000.0);
    cout << s1 << endl;
    
    s1.withdraw(2000);
    cout << s1 << endl;
    
    s1.withdraw(1000);
    cout << s1 << endl;
    
	return 0;
}
