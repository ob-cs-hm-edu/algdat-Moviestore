#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Person {
private:
    string name;
    int age;
    // Eine Person hat einen eigenen Vektor in dem Pointer auf
    // die ausgeliehenen Filme stehen.
    vector<Movie *> *rentedMovies;
public:
    Person(string n, int a) : name(n), age(a) {
        rentedMovies = new vector<Movie *>();
    }

    string getName() const { return name; }

    int getAge() const { return age; }

    // Nimmt einen Film in die Liste der ausgeliehenen Filme auf.
    void addToRentedMovies(Movie *);

    // Entfernt den Film aus der Liste.
    bool rmFromRentedMovies(Movie *);

    friend ostream &operator<<(ostream &os, const Person &p);
};

#endif

