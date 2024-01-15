#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector <string> stooges {"Larry","Marry","curry"};
    vector <string> *stooges_pointer {nullptr};
    stooges_pointer = &stooges;
    cout << "First stooge:" << (*stooges_pointer).at(0) << endl;
    cout << "Stooges:";
    for(auto vec : *stooges_pointer)//*stooges_pointer => stooges
        cout << vec << " ";
    cout << endl;
    return 0;
}
