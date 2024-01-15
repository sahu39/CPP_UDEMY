#include <iostream>
#include <string>

template <typename T>
T min(T a, T b)
{
    return (a < b) ? a:b;
}

template <typename T1, typename T2>
void fun(T1 a, T1 b)
{
    std::cout << a << " " << b << std::endl;
}

struct Person
{
    std::string name;
    int age;
    bool operator<(const Person &hrs)const{
        return this->age < hrs.age;
    }
};

int main()
{
    Person p1 {"Sunil",31};
    Person p2 {"Swagat",24};
    Person p3 = min(p1,p2);
    std::cout << p3.name << " is younger" << std::endl;
    std::cout << min<int>(7,8) << std::endl; //7
    std::cout << min(7,8) << std::endl;      //7
    std::cout << min('A','B') << std::endl;  //A
    std::cout << min(12.7,12.5)<<std::endl;  //12.5
    
    fun<int,int>(7,8);
    //fun(8,9);//error
    fun<char,int>('A',12);
    //fun('A',12);//error
    //fun<char,int>('A',12);
    //fun(12.4,'B');//error
    fun<float,char>(12.4,'B');
	//std::cout << "My Template" << std::endl;
	return 0;
}
