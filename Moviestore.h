#ifndef _MOVIESTORE_H_
#define _MOVIESTORE_H_

#include <iostream>
#include <vector>
#include <string>
#include "FSK.h"
#include "Movie.h"
#include "Person.h"

using namespace std;

class Moviestore {
private:
    vector<Movie *> *available, *rented;
public:
    Moviestore() {
        available = new vector<Movie *>();
        rented = new vector<Movie *>();
        clients = new vector<Person *>();
    }

    ////////////////////////////////////////////////////////////////////////
    // Filme
    ////////////////////////////////////////////////////////////////////////
    // Ein Film kann mit seinem Titel und der FSK-Freigabe als tatsächliches
    // Alter (z.B. 16) zur Liste der verfügbaren Filme hinzugefügt werden.
    bool addMovie(string title, int fsk);

    // Um einen Film auszuleihen, muss der Titel des Filmes und der
    // Name des Ausleihers übergeben werden. Daraus folgt für diese
    // einfache Verwaltung, dass sowohl der Name des Films als auch des
    // Kunden eindeutig sein muss.
    bool rentMovie(string title, string name);

    // Bei der Rückgabe wird nur der Filmtitel übergeben.
    bool handInMovie(string title);

    ////////////////////////////////////////////////////////////////////////
    // Kunden
    ////////////////////////////////////////////////////////////////////////
private:
    vector<Person *> *clients;
public:
    // Hinzufügen eins Kunden.
    bool addClient(string name, int age);

    ////////////////////////////////////////////////////////////////////////
    // Ausgabe
    ////////////////////////////////////////////////////////////////////////
    friend ostream &operator<<(ostream &os, const Moviestore &m);
};

#endif




