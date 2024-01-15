#include <iostream>
#include <string>
using namespace std;
int main()
{
	int scores [] {100,98,23,45,60,-1};
    int *score_ptr {scores};
    
    while(*score_ptr != -1){
        cout << *score_ptr << endl;
        score_ptr++;
    }
    cout << "-----------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1){
        cout << *score_ptr++ << endl;
    }
    cout << "-----------------------" << endl;
    
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout << p1 << " == " << p2 << ":" << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << ":" << (p1 == p3) << endl;
    
    cout << *p1 << " == " << *p2 << ":" << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << ":" << (*p1 == *p3) << endl;
    
    p3 = &s3;
    cout << *p1 << " == " << *p3 << ":" << (*p1 == *p3) << endl;
    cout << "-----------------------" << endl;
    
    char name [] {"Frank"};
    char *ptr1 {nullptr};
    char *ptr2 {nullptr};
    
    ptr1 = &name [0];
    ptr2 = &name [3];
    
    cout << "In the string " << name << ", " << *ptr2 << " is " << (ptr2-ptr1) << " characters away from " << *ptr1 << endl;
        
    
	return 0;
}
