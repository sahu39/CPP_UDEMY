#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int num_items {};
    cout << "Enter of number of items: " ;
    cin >> num_items;
    
    vector <int> data {};
    
    for (int i{1}; i <= num_items; ++i){
        int data_item {};
        cout << "Enter data item at " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }
    
    cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Printing Histogram" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
    for (auto val : data){
        //cout << val << endl;
        for (int i {1}; i <= val; ++i){
            if(i % 5 == 0)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }
	return 0;
}
