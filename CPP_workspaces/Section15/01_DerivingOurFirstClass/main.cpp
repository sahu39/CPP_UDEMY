#include <iostream>
#include "Account.h"
#include "Saving_Account.h"
using namespace std;
int main()
{
	cout <<"=============Account class==========" << endl;
    Account new_acc {};
    new_acc.deposit(2000);
    new_acc.withdraw(500);
    
    Account *pnew_acc{nullptr};
    pnew_acc = new Account();
    pnew_acc->deposit(1000);
    pnew_acc->withdraw(500.0);
    
    cout << "=============Saving Account Class======" << endl;
    Saving_Account save_acc {};
    save_acc.deposit(5000);
    save_acc.withdraw(1000);
    
    Saving_Account *new_ptr{nullptr};
    new_ptr->deposit(3000);
    new_ptr->withdraw(1000);
    cout <<"=======================================" << endl;
	return 0;
}
