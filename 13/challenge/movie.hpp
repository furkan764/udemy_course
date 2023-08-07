#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <iostream>
#include <string>
#include <vector>
class Movie
{
private:
    std::string name;   //  name of the movie
    std::string rating;   //  movie rating 
    int watched;          //  number of times you watched the movie
public:
    // Constructor 
    Movie(std::string name, std::string rating, int watched);
    
    // Copy constructor 
    Movie(const Movie &source); 
    
    // Destructor
    ~Movie();

    
    // void set_name(std::string name) {this->name = name; }
     std::string get_name() const { return name; }
    
    // void set_rating(std::string rating) {this->rating = rating; }
    std::string get_rating() const { return rating; }
    
    // void set_watched(int watched) {this->watched = watched; }
    // int get_watched() const { return watched; }
    
    // izlenme sayısı 1 arttırılıyor
    void increment_watched() { ++watched; }
    
    // bilgileri ekrana yazdırılıyor
    void display() const;
};

#endif // _MOVIE_H_
