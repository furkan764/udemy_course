#include <iostream>
#include "/home/furkan/Desktop/udemy_course/13/challenge/movie.hpp"
#include "/home/furkan/Desktop/udemy_course/13/challenge/movies.hpp"

// Implemention of the construcor

Movie::Movie(std::string name, std::string rating, int watched) 
    : name(name), rating(rating), watched(watched)  {
}

//Implemention of the copy constructor
Movie::Movie(const Movie &source) 
    : Movie{source.name, source.rating, source.watched} {
}

// Implementation of the destructor
Movie::~Movie() {
    
}

// Implementation of the display method
// should just insert the movie attributes to cout

void Movie::display() const {
    std::cout << name << ", " << rating <<  ", " << watched  <<   std::endl;
}


Movies::Movies() {

}

Movies::~Movies() {
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (const Movie &movie: movies) {
        if (movie.get_name() == name)
            return false;
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
    return true;
}

bool Movies::increment_watched(std::string name) {
    for(Movie &movie: movies) {
        if (movie.get_name() == name) {
            movie.increment_watched() ;
            return true;
        }
    }
    return false;
}


void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "Sorry, no movies to display\n" << std::endl;
    } else {
        std::cout << "\n===================================" << std::endl;
        for (const auto &movie: movies)
            movie.display();
        std::cout << "\n===================================" << std::endl;
    }
}
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);


// filmi izlemişsek izlenme sayısını arttırmak için
void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" <<  std::endl;
    } else {
        std::cout << name << " not found" <<  std::endl;
    }
}

// film eklemek için
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl;
    } else {
        std::cout << name << " already exists" <<  std::endl;
    }
}

int main() {
    
    Movies my_movies;
    
   // my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);                 // OK
    add_movie(my_movies,"Star Wars", "PG",5);             // OK
    add_movie(my_movies,"Cinderella", "PG",7);           // OK

    increment_watched(my_movies,"Big");                    // OK
     
    // my_movies.display();   // Big, Star Wars, Cinderella
    
    // add_movie(my_movies,"Cinderella", "PG",7);            // Already exists
    // add_movie(my_movies,"Ice Age", "PG",12);              // OK
 
    // my_movies.display();    // Big, Star Wars, Cinderella, Ice Age
    
    // increment_watched(my_movies,"Big");                    // OK
    // increment_watched(my_movies,"Ice Age");              // OK
    
    // my_movies.display();    // Big and Ice Age watched count incremented by 1
    
    // increment_watched(my_movies,"XXX");         // XXX not found

	return 0;
}