#include <iostream>
#include <Movies.h>

void Increment_Watched(Movies &movies,std::string name);
void add_movie(Movies &movies,std::string name,std::string rating,int watched);

void Increment_Watched(Movies &movies,std::string name)
{
    movies.increment_watched(name);
}

void add_movie(Movies &movies,std::string name,std::string rating,int watched)
{
    if(movies.add_movie(name,rating,watched))
    {
        std::cout << name << " added" << std::endl;
    }
    else
    {
        std::cout << name << " is already exist" << std::endl;
    }
}

int main()
{
    Movies my_movies;
    my_movies.display();
	
    add_movie(my_movies,"Titanic","PG-18",2);
    add_movie(my_movies,"World War Z","PG-18",3);
    my_movies.display();
    add_movie(my_movies,"World War Z","PG-18",4);
    add_movie(my_movies,"BatMan Begins","PG-13",4);
    my_movies.display();
    Increment_Watched(my_movies,"BatMan Begins");
    my_movies.display();
	return 0;
}
