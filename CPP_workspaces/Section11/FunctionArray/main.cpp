#include <iostream>
using namespace std;

void print_array(int [],size_t);
void zero_array(const int arr[],size_t size);
int main()
{
	int arr1d [] = {1,2,3,6,7,8};
    print_array(arr1d, 6);
    zero_array(arr1d, 6);    

	return 0;
}

void print_array(int arr[],size_t size){
    for(size_t i {0}; i < size; i++)
        cout << arr[i] << endl;
}
void zero_array(const int arr[],size_t size){
    for(size_t i {0}; i < size; i++)
        arr [i] = 0;
    for(size_t i {0}; i < size; i++)
        cout << arr[i] << endl;
}


