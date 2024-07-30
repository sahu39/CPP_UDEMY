#include <iostream>
void fun_a(void);
void fun_b(void);
void fun_c(void);
void fun_a()
{
    std::cout<< "Starting fun_a" << std::endl;
    fun_b();
    std::cout<< "Ending fun_a" << std::endl;
}
void fun_b()
{
    std::cout<< "Starting fun_b" << std::endl;
    fun_c();
    std::cout<< "Ending fun_b" << std::endl;
}
void fun_c()
{
    std::cout<< "Starting fun_c" << std::endl;
    //fun_b();
    std::cout<< "Ending fun_c" << std::endl;
}

int main()
{
    std::cout<<"Starting Main" << std::endl;
    fun_a();
    std::cout<<"Finishing Main" << std::endl;
	return 0;
}
