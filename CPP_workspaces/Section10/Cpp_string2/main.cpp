//c++ string illustartion
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2 {"Frank"};
    string s3 {s2};
    string s4 {"Frank",3};
    string s5 {s3, 0, 2};
    string s6 (3, 'X');
    
	cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "s3:" << s3 << endl;
    cout << "s4:" << s4 << endl;
    cout << "s5:" << s5 << endl;
    cout << "s6:" << s6 << endl;
    
//    output:
//    -------
//    s1:
//    s2:Frank
//    s3:Frank
//    s4:Fra
//    s5:Fr
//    s6:XXX
    
	return 0;
}
