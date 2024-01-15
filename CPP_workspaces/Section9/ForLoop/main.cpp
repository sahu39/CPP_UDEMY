//For loop

#include <iostream>
#include <vector>

using namespace std;

int main()
{
//	for(int i {1}; i <= 10; ++i){
//        if(i % 2 == 0)
//            cout << i << endl;
//    }
//    int scores[] {100, 90, 87};
//    
//    for(int i {0}; i <= 2; i++){
//        cout << scores[i] << endl;
//    }
//    for (int i {1}, j {5}; i <= 5; ++i, ++j){
//        cout << i <<" + " << j << " = " << (i+j) << endl;
//    }
//    for (int i {1}; i <= 100; ++i){
//        cout << i << ((i % 10 == 0) ? "\n" : " ");
//    }


    vector <int> nums {10,20,30,40,50};
    for (unsigned i {0}; i < nums.size(); ++i){
        cout << nums.at(i) << endl;
    }
    
	return 0;
}
