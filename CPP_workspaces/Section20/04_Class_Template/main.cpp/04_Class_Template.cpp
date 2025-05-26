#include <iostream>
template <typename t1,typename t2>
class Pair{
private:
    t1 first;
    t2 second;
public:
    Pair(t1 f,t2 s):first{f},second{s}{}
    void display() const{
        std::cout << "first: " << first << " second:" << second << std::endl;
    }
};
int main()
{
    Pair<std::string,int> a("Sunill",32);
    a.display();
    
    Pair<int,double> b(32,45.789);
    b.display();
    

    return 0;
}