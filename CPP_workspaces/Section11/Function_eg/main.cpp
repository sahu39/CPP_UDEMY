#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int random_number {};
    size_t count {10};
    int min {1};
    int max {6};
    
    srand(time(nullptr));
    for(size_t i {1}; i < count; ++i){
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
	return 0;
}
