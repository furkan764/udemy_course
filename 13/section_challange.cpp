#include <iostream>
#include <string>

using namespace std;

class Movie
{
private:
    string name;   //name of the movie
    int rating;     // rating of the movie
    static int movie_count;         // movie count

public:
    int watch_count; //number of times you watched the movie
    static int get_movie_count() { return movie_count; }         // bunun statik olması önemli
    Movie(string name_val, int rating_val, int watch_count_val); // köle
    Movie(const Movie &source);                                  // copy constructor
    ~Movie();                                                    // destructor

    void increment_watched(Movie &movie);
};

int Movie::movie_count{0}; // tek seferlik olrak başlatıyoruz.

// köle constructor
Movie::Movie(string name_val, int rating_val, int watch_count_val)
    : name{name_val}, rating{rating_val}, watch_count{watch_count_val}
{
    ++movie_count;
    
}
// copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watch_count}
{
}
Movie::~Movie()
{
    --movie_count;
}

void display_movie_count()
{
    cout << "The movie watched: " << Movie::get_movie_count() << endl;
}

void increment_watched(Movie &movie)
{
    ++movie.watch_count;
}
int main()
{
    Movie movie1("Furkan", 9, 1);
    display_movie_count();
    increment_watched(movie1);

    Movie movie2("Erdoğan", 5, 2);
    // Movie movie1("name",rating,count);  bu aynı zamanda movie_count ı arttıracak.
    display_movie_count();
    
    return 0;
}