#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char selection {};
    vector <int> list {};
    int element {};
    double mean {};
    int result {};
    int smallest {}, largest {};
	do{
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        switch (selection){
            case 'P':
            case 'p':
                //cout << "p" << endl;
                if(list.size() != 0){
                    cout << "[ ";
                    for (auto val : list){
                        cout << val << " ";
                    }
                    cout << "]" << endl;
                }
                else{
                    cout << "[] - the list is empty" << endl;
                }
                break;
            case 'A':
            case 'a':
                cout << "Enter element to add to the list: ";
                cin >> element;
                list.push_back(element);
                cout << element << " is added to the list" << endl;
                //cout << "a" << endl;
                break;
            case 'M':
            case 'm':
                if (list.size() == 0)
                    cout << "Unable to calculate the mean - no data" << endl;
                else{
                    for (auto val : list)
                        result += val;
                    mean = static_cast <double> (result) / list.size();
                    cout << "mean of all the elements in the list is: " << mean << endl;
                }
                break; 
            case 'S':
            case 's':
                if (list.size() == 0){
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                }
                else{
                    smallest = list.at(0);
                    for (auto val : list){
                        if (val < smallest)
                            smallest = val;
                    }
                    cout << "Smallest element is: " << smallest << endl;
                }
                //cout << "s" << endl;
                break;
            case 'L':
            case 'l':
                if (list.size() == 0){
                    cout << "Unable to determine the largest number - list is empty" << endl;
                }
                else{
                    largest = list.at(0);
                    for (auto val : list){
                        if (val > largest)
                            largest = val;
                    }
                    cout << "Largest element is: " << largest << endl;
                }

                //cout << "l" << endl;
                break;
            case 'Q':
            case 'q':
                cout << "Goodbye.........." << endl;
                break;
            default:
                cout << "Unknown Selection pleae try again!!!" << endl;
        }
        

    }while (selection != 'q' && selection != 'Q');
	return 0;
}
