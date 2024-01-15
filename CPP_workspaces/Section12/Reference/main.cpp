#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int val {100};
    int &ref {val};
    cout << "-----------------------------------" << endl;
    cout << "val:" << val << endl;
    cout << "ref:" << ref << endl;
    
    cout << "-----------------------------------" << endl;
    val = 200;
    cout << "val:" << val << endl;
    cout << "ref:" << ref << endl;
    
    ref = 300;
    cout << "-----------------------------------" << endl;
    cout << "val:" << val << endl;
    cout << "ref:" << ref << endl;

    cout << "-----------------------------------" << endl;
	vector <string> stooges {"Larry", "Marry", "Curly"};
    for(auto var : stooges){//var is the copy of each element of stooges so changes does not effect
        var = "Funny";
    }
    for(auto var : stooges){//We will not find required result as stooges did not change
        cout << var << endl;
    }
    
    cout << "-----------------------------------" << endl;
    for(auto &var : stooges){//var as reference to stooge elements can change elements of stooges
        var = "Funny";
    }
    for(auto var : stooges){
        cout << var << endl;
    }
    
//    for(auto const &var : stooges){//Error: as var is defined as const so can not modify the refrenced variable stooges
//        var = "Funny";
//    }
	return 0;
}
