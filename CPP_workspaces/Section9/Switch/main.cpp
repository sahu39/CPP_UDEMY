#include <iostream>

using namespace std;

int main()
{
	char letter_grade {};
    cout << "Enter the letter grade you are expecting from exam: ";
    cin >> letter_grade;
    
    switch(letter_grade){
        case 'a':
        case 'A':
            cout << "You need 90 or above study hard!!!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80 to 89 to get this grade go study!!!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70 to 79 to get an average grade!!!" << endl;
            break;
        case 'd':
        case 'D':
            cout << "You need 60 to 69 to get this grade!!!" << endl;
            break;
        case 'f':
        case 'F':
            cout << "Don't expect for this grade you will be failed!!!" << endl;
            break;
        default:
            cout << "Not a valid garde!!!" << endl;
        
    }
	return 0;
}
