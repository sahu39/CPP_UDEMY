#include <iostream>
using namespace std;
int main()
{
//    int number {};
//	do{
//        cout << "Enter your number:" << endl;
//        cin >> number;
//    }while (number <= 1 || number >= 5);
//    cout << "Thanks!!" << endl;
    cout << "-----------------------" << endl;
/*    char selection {};
    do{
        double width {}, height {};
        double area {};
        cout << "Enter width and height separated by white space:";
        cin >> width >> height;
        
        area = width * height;
        cout << "Area is " << area << endl;
        cout << "-------------------------" << endl;
        cout << "Calculate another? (Y/N): " ;
        cin >> selection;
    }while (selection == 'Y' || selection == 'y');
    cout << "Thanks!!!" << endl;*/
    cout << "Menu config......" << endl;
    char selection {};
    do{
        cout << "Enter your Selection (1,2,3,Q): ";
        cin >> selection;
        switch (selection){
            case '1':
                cout << "You chose: " << selection << " - Doing this" << endl;
                break;
            case '2':
                cout << "You chose: " << selection << " - Doing that" << endl;
                break;
            case '3':
                cout << "You chose: " << selection << " - Doing somethng else" << endl;
                break;
            default:
                cout << "Unknown option - try again..." << endl;
        }
        
        cout << "-------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do Something else" << endl;
        cout << "Q. Quit" << endl;
    }while ( selection != 'Q' && selection != 'q');
    cout << "Ok good bye!!" << endl;
	return 0;
}
