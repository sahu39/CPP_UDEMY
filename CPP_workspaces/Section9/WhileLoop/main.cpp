//Input validation
#include <iostream>

using namespace std;

int main()
{
    bool done {false};
    int number {0};
    
    while(done != true){
        cout << "Enter number between 1 to 5: ";
        cin >> number;
        
        if (number <= 1 || number >= 5)
            cout << "Please Try again!!" << endl;
        else{
            cout << "Thanks you entered:" << number << endl;
            done = true;
            
        }
    }

	return 0;
}
