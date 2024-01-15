#include <iostream>
using namespace std;
int main()
{
    int int_array [] {10,20,30};
    //int *arr_ptr  {nullptr};
    
    cout << int_array << endl;//0x6ffe00---->Array name means 1st element address of array
    cout << *int_array << endl;//10----->First element of array as array name is 1st element address of array
	cout << "------------------------------" << endl;
    int *arr_ptr {int_array};
    cout << arr_ptr << endl;//0x6ffe00
    cout << *arr_ptr << endl;//10------>as arr_ptr contains the arr_ptr  
    cout << "------------------------------" << endl;
    cout << arr_ptr [0] << endl;
    cout << arr_ptr [1] << endl;
    cout << arr_ptr [2] << endl;
    cout << "------------------------------" << endl;
    cout << arr_ptr << endl;
    cout << arr_ptr+1 << endl;
    cout << arr_ptr+2 << endl;
    cout << "------------------------------" << endl;
    cout << *arr_ptr << endl;//10
    cout << *(arr_ptr+1) << endl;//20
    cout << *(arr_ptr+2) << endl;//30
	return 0;
}
