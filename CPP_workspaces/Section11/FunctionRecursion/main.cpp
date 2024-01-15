//Fibonacci series
#include <iostream>
using namespace std;
unsigned long long fibonacci(unsigned long long n){
    if(n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
unsigned long long factorial(unsigned long long n){
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}
int main()
{
	cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;
    cout << fibonacci(3) << endl;
    cout << fibonacci(4) << endl;
    cout << fibonacci(5) << endl;
    cout << fibonacci(6) << endl;
    cout << fibonacci(7) << endl;
    cout << "factorial:" << endl;
    cout << "-----------" << endl;
    cout << factorial(0) << endl;
    cout << factorial(1) << endl;
    cout << factorial(3) << endl;
	return 0;
}
