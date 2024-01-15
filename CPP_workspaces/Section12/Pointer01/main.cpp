#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int num {10};
    cout << "Value of num is " << num << endl; //Value of num is 10
    cout << "size of num is " << sizeof num << endl;//size of num is 4
    cout << "Address of num is:" << &num << endl;//Address of num is:0x6ffe1c

    
    int *p;
    cout << "\nValue of p is " << p << endl;//Value of p is 0xce13e0
    cout << "size of p is " << sizeof p << endl;//size of p is 8
    cout << "Address of p is:" << &p << endl;//Address of p is:0x6ffe10

    p = nullptr;
    cout << "\nValue of p is " << p << endl;//Value of p is 0
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4 {nullptr};
    string *p5 {nullptr};
    cout << "size of p1 " << sizeof p1 << endl;//size of p1 8
    cout << "size of p2 " << sizeof p2 << endl;//size of p2 8
    cout << "size of p3 " << sizeof p3 << endl;//size of p3 8
    cout << "size of p4 " << sizeof p4 << endl;//size of p4 8
    cout << "size of p5 " << sizeof p5 << endl;//size of p5 8
    return 0;
}
