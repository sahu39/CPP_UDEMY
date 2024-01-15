#include <iostream>
#include "Movie.h"

Movie::Movie()
{
    //std::cout << "no-arg constructors" << std::endl;
}

Movie::Movie(std::string nam,std::string rate, int num):name(nam),rating(rate),count(num){
    //std::cout << "three arg constructor" << std::endl;  
}

Movie::Movie(const Movie &Source):Movie(Source.name,Source.rating,Source.count){
   // std::cout << "copy-constructor" << std::endl;
}

void Movie::display() const{
    std::cout << "Name:" << name << " Rating:" << rating << " count:" << count << std::endl;
}

Movie::~Movie()
{
}

