#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //Multiplication Table
    for (int i{1}; i <= 10; i++){
        for(int j{1}; j <= 10; j++){
            cout << i << " * " << j << " = " << i*j << endl;
        }
        cout << "-------------------" << endl;
    }
    
    cout << "------------------------" << endl;
	vector <vector <int>> vector2d
    {
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400}
    };
    
    for( auto vec : vector2d){
        for( auto val : vec )
            cout << val << " ";
        cout << endl;
    }
	return 0;
}
