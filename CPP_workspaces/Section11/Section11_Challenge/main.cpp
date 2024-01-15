#include <iostream>
#include <vector>
using namespace std;
void selection();
void operation(char);
void printvector(const vector <int> &v);
void addvaluetovector();
void averageofvector();
void smallestofelement();
void largestofelement();
void handle_find(const vector <int> &v);
bool findelt(const vector <int> &v,int elt);
vector <int> myvector {};
int main()
{
    char select {};
    do{
        selection();
        cin >> select;
        operation(select);
    }while(select != 'q' && select != 'Q');
	return 0;
}
void selection(){
    cout << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a Number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

void operation(char x){
    switch(x){
        case 'P':
        case 'p':
            cout << "p/P" << endl;
            printvector(myvector);
            break;
        case 'A':
        case 'a':
            cout << "a/A" << endl;
            addvaluetovector();
            break;
        case 'M':
        case 'm':
            cout << "m/M" << endl;
            averageofvector();
            break;
        case 'S':
        case 's':
            cout << "s/S" << endl;
            smallestofelement();
            break;
        case 'L':
        case 'l':
            cout << "l/L" << endl;
            largestofelement();
            break;
        case 'f':
        case 'F':
            handle_find(myvector);
            break;
        case 'Q':
        case 'q':
            cout << "q/Q" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        } 
    
}

void printvector(const vector <int> &vect){
    if(vect.size() != 0){
        cout << "[ ";
        for (auto val : vect){
            cout << val << " ";
        }
        cout << "]" << endl;
        }
        else{
            cout << "[] - the list is empty" << endl;
        }
}
void addvaluetovector(){
    int item {};
    cout << "Enter Item to insert into vector:";
    cin >>  item;
    myvector.push_back(item);
    cout << item <<" is added to vector" << endl;
}
void averageofvector(){
    int result {};
    double mean {};
    if (myvector.size() == 0)
        cout << "Unable to calculate the mean - no data" << endl;
    else{
        for (auto val : myvector)
            result += val;
        mean = static_cast <double> (result) / myvector.size();
        cout << "mean of all the elements in the list is: " << mean << endl;
    }
}
void smallestofelement(){
    int smallest {};
    if (myvector.size() == 0){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }
    else{
        smallest = myvector.at(0);
        for (auto val : myvector){
            if (val < smallest)
                smallest = val;
        }
        cout << "Smallest element is: " << smallest << endl;
    }
}
void largestofelement(){
    int largest {};
    if (myvector.size() == 0){
        cout << "Unable to determine the largest number - list is empty" << endl;
    }
    else{
        largest = myvector.at(0);
        for (auto val : myvector){
            if (val > largest)
                largest = val;
        }
                    cout << "Largest element is: " << largest << endl;
                }
}
bool findelt(const vector <int> &v,int elt){
    for(auto val : v){
        if(val == elt){
            return true;
        }
    }
    return false;
}
void handle_find(const vector <int> &v){
    int elt {};
    cout << "Enter element to find:" ;
    cin >> elt;
    if (v.size() == 0){
        cout << "No need to find elements as vector is empty" << endl;
    }
    else{
        if(findelt(v,elt)){
            cout << elt << " was found" << endl;
        }
        else{
            cout << elt << " was not found" << endl;
        }
    }
}