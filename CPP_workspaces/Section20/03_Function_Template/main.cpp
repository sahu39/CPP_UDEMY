#include <iostream>
//Function template
template <typename T>
void swapValues(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y =20;
    double a =1.5, b =3.7;
    
    swapValues(x,y);
    swapValues(a,b);
    
    std::cout << "x:" << x << " y:" << y << std::endl;
    std::cout << "a:" << a << " b:" << b << std::endl;
    return 0;
}