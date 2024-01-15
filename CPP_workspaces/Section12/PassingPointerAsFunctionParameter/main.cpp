#include <iostream>
using namespace std;
void double_data(int *);
int main()
{
	int x {0};
    //int *x_ptr {nullptr};
    cout << "Enter x:";
    cin >> x;
    //x_ptr =  &x;
    double_data(&x);
    cout << "x value after double is:" << x << endl;
	return 0;
}
void double_data(int *int_ptr){
    *int_ptr *= 2;
}
