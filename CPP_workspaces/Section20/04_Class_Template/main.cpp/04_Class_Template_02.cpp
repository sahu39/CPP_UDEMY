//Template Specillization
#include <iostream>

template <typename T>
void print(T value){
    std::cout << "Generic Template: " << value << std::endl;
}
//speecializtion for char*
template <>
void print<char *>(char *value)
{
    std::cout << "Specialized template for char *:" << value << std::endl;
}
int main(){
    print(10);
    print("Hello");
    
    return 0;
}
