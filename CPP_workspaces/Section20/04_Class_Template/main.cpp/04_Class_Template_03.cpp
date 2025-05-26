//Non-type template parameters
#include <iostream>
#include <string>
template <typename T,int size>
class Non_type{
private:
    T array[size];
public:
    void set_index(int index, T value)
    {
        if(index >=0 && index < size)
        {
            array[index] = value;
        }
    }
    
    T get(int index) const{
        return array[index];
    }
};

int main()
{
    Non_type<std::string,3> my_string_array;
    my_string_array.set_index(0,"Sunil");
    my_string_array.set_index(1,"Kumar");
    my_string_array.set_index(2,"Sahu");
    
    for(int i=0;i<3;i++)
    {
        std::string str = my_string_array.get(i);
        std::cout << str << std::endl;
    }
    
    return 0;
}