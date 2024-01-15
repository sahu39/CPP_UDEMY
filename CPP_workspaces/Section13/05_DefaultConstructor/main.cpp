#include <iostream>
#include <string>
using namespace std;
class Account{
private:
    string name;
    double balance;
public:
    //User defined default no-args constructor
    Account(){
        name =  "None";
        balance = 0.0;
        cout << "Default Constructor/No-args constructor" << endl;
    }
    ~Account(){
        cout << "Destructor is called" << endl;
    }
};

int main()
{
	Account Franks_account;
	return 0;
}
