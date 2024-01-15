#include <iostream>
using namespace std;
int main()
{
    int i;
	int *int_ptr {nullptr};
    int_ptr = new int;
    //*int_ptr = 10;
    cout << int_ptr << endl;
    delete int_ptr;
    
    size_t size {0};
    double *double_ptr {nullptr};
    cout << "How many temps " ;
    cin >> size;
    
    double_ptr = new double[size];
    cout << double_ptr << endl;
    delete [] double_ptr;
    
    int *val {nullptr};
    val = new int[10] ();
    for(i=0;i<10;i++)
        std::cout << "val["<< i <<"]:" << val[i] << std::endl;
    delete [] val;
    
	return 0;
}
