#ifndef MOVIE_H
#define MOVIE_H
#include <string>
class Movie
{
private:
    std::string name;
    std::string rating;
    int count;
public:
    Movie();
    Movie(std::string nam,std::string rate,int num);
    Movie(const Movie &);
    void display() const;
    ~Movie();
    //getter and setters
    std::string get_movie() const {return name;}
    std::string get_rating() const {return rating;}
    int get_watched() const {return count;}
    
    void set_movie(std::string name){this->name = name;}
    void set_rating(std::string rating){this->rating = rating;}
    void set_watch(int rating){this->rating = rating;}
    
    void increment_watched(){++count;}
    
};

#endif // MOVIE_H
