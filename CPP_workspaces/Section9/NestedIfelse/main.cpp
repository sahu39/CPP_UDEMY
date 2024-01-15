//Grades
#include <iostream>

using namespace std;
int main()
{
    int score {};
    cout << "Enter your score (0-100):" ;
    cin >> score;
    
    char letter_grade {};
    
    if(score >= 0 && score <= 100){
        if(score > 90)
            letter_grade = 'A';
        else if(score > 80)
            letter_grade = 'B';
        else if(score > 70)
            letter_grade = 'C';
        else if(score > 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
        cout << "your grade is: " << letter_grade << endl;
        
        if(letter_grade == 'F')
            cout << "Sorry you are failed the class pls try again!!!" << endl;
        else
            cout << "Congrats!!!" << endl;
    }else{
        cout << score <<" is not valid" << endl;
    }
    
	return 0;
}
