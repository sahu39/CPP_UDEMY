#include <iostream>
using namespace std;
int *largestint(int *,int *);
int *createarray(size_t size,int init_value=0);
void print_array(const int *array, size_t size);
int main()
{
	int x {};
    int y {};
    cout << "Enter x and y:";
    cin >> x >> y;
    int *largest = largestint(&x,&y);
    cout << "largest values address is:" << largest << ", Value is:" << *largest << endl;
    cout << "Address of x is:" << &x << " Address of y is:" << &y << endl;
    
    int *new_array {nullptr};
    new_array = createarray(10);
    cout << "------------------------------" << endl;
    print_array(new_array,10);
    delete [] new_array;
    int *new_array_1 {nullptr};
    new_array_1 = createarray(10,3);
    cout << "------------------------------" << endl;
    print_array(new_array_1,10);
    delete [] new_array_1;
	return 0;
}
int *largestint(int *ptr1,int *ptr2){
    if(*ptr1 > *ptr2)
        return ptr1;
    else
        return ptr2;
}
int *createarray(size_t size,int init_value){
    int *new_storage {nullptr};
    new_storage = new int [size];
    for(size_t i {0}; i<size; i++)
        *(new_storage+i) = init_value;
    return new_storage;
}
void print_array(const int *array,size_t size){
    for(size_t i{0}; i<size; i++)
        cout << *(array+i) << " ";
    cout << endl;
}