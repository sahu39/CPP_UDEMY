#include <iostream>
using namespace std;

void print(const int *,size_t);
int *apply_all(const int *,size_t,const int *,size_t);

int main()
{
	int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};
    size_t array1_size {5};
    size_t array2_size {3};
    int *results {nullptr};
    cout << "Array1:";
    print(array1,array1_size);
    
    cout << "Array2:";
    print(array2,array2_size);
    
    results = apply_all(array1,array1_size,array2,array2_size);
    cout << "results:";
    print(results,array1_size*array2_size);
    delete [] results;
	return 0;
}

void print(const int *arr,size_t size){
    cout << "[ ";
    for(size_t i {0}; i<size; ++i){
        cout << *(arr+i) << " ";
    }
    cout << "]" << endl;
}
int *apply_all(const int *arr1,size_t size1,const int *arr2,size_t size2){
    int *new_arr {nullptr};
    size_t new_arr_size {size1*size2};
    new_arr = new int[new_arr_size];
    for(size_t i{0}; i<new_arr_size; i++){
        new_arr [i] = arr1[i%size1] * arr2[i/size1];
    }
    
    return new_arr;
}
