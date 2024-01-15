#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int temp {};
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
	int i{5};
    while(i > 0){
        cout << i << endl;
        i--;
    }
    int x{100}, y{200};
    cout << "\nx:" << x << endl;
    cout << "y:" << y << endl;
    swap(&x,&y);
    cout << "\nx:" << x << endl;
    cout << "y:" << y << endl;
    
	return 0;
}
