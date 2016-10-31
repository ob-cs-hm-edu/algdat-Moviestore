#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>
#include "FSK.h"

using namespace std;

class Movie {
private:
    string title;
    fsk fsk_;
public:
    Movie(string t, enum fsk f) : title(t), fsk_(f) { }

    string getTitle() const { return title; }

    // Soll true zurück geben, wenn das übergebene Alter >= der
    // fsk ist.
    bool okForAge(int age) const;

    friend ostream &operator<<(ostream &os, const Movie &m);
};

#endif



