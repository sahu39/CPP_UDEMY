#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
    int scores[] {100,90,97};
    
    for(int score : scores){
        cout << score << endl;
    }
    cout << "------------------------------------" << endl;
//    int scores[] {100,90,97};
    
    for(auto score : scores){
        cout << score << endl;
    }
    cout << "------------------------------------" << endl;

    vector <double> temps {87.2, 77.1, 80.3, 72.5};
    
    double average_temp {};
    double runninn_sum {};
    
    for (auto temp : temps){
        runninn_sum += temp;
    }
    average_temp = runninn_sum / temps.size();
    cout << fixed << setprecision(1);
    cout << "average_temp:" << average_temp << endl;
    
    cout << "------------------------------------" << endl;
    
    for (auto c : "Sunil"){
        cout << c << endl;
    }
    
    cout << "------------------------------------" << endl;
    
    for (auto val : {1,2,3,4,5}){
        cout << val << endl;
    }
	return 0;
}
