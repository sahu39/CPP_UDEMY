#include <iostream>
using namespace std;

int num {300}; //Global Declaration num

void local_example(int x);
void global_example();
void static_example();
int main()
{
	int num {100};
    int num1 {500};
    cout << "Local num is:" << num << " in main" << endl;
    {
        int num {200};
        cout << "Local Num is:" << num << " in inner block in main" << endl;
        cout << "Inner block main can see outer num1:" << num1 << endl;
    }
    cout << "Local num is:" << num << " in main" << endl;
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    static_example();
    static_example();
	return 0;
}

void local_example(int x){
    int num {1000};
    cout << "\nLocal num is: " << num << " in local_example-start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example-end" << endl;
    
}
void global_example(){
    cout << "\nGlobal num is:" << num << " in global_example-start" << endl;
    num *= 2;
    cout << "Global num is:" << num << " in global_example-end" << endl;
}

void static_example(){
    static int num {5000};
    cout << "\nLocal Static main:" << num << " in static_example-start" << endl;
    num += 1000;
    cout << "Local Static main:" << num << " in static_example-end" << endl;
}