#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str {};
    cout << "Enter your string:" ;
    getline(cin,str);
    
    for (int i = 0; i <= str.length(); i++){
        for(int j = i; j >=i ;j--){
            cout << " ";
        }
        cout << endl;
    }
    
	return 0;
}
