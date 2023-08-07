
#include "/home/furkan/Desktop/udemy_course/13/challenge/movie.hpp"
#include <vector>

class Movies
{
private:
    std::vector<Movie> movies;
public:
    Movies();             // Constructor

    ~Movies();          // Destructor
    
   // aynı film var mı diye kontrol ediyor
    bool add_movie(std::string name, std::string rating, int watched);
    
    //
    bool increment_watched(std::string name);
    
    //her şeyi gösteren foksiyon
    void display() const;
};

