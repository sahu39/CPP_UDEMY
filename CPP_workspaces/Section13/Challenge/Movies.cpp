#include "Movies.h"
#include <iostream>

Movies::Movies()
{ 
}

Movies::~Movies()
{
}

bool Movies::add_movie(std::string name,std::string rating,int watched)
{
    for(const Movie &movie: movies)
    {
        if(movie.get_movie() == name)
        {
            return false;
        }
    }
    Movie temp{name,rating,watched};
    movies.push_back(temp);
    return true;
}
bool Movies::increment_watched(std::string name)
{
    for(Movie &movie: movies)
    {
        if(movie.get_movie() == name)
        {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const{
    if(movies.size() == 0)
    {
        printf("There are no movies to display\n");
    }
    else
    {
        std::cout <<"\n=================================="<<std::endl;
        for(auto movie: movies)
            movie.display();
        std::cout <<"\n=================================="<<std::endl;
    }
    
}

