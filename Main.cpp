#include <iostream>
#include <string>
#include "Moviestore.h"

using namespace std;

int main(int argc, const char *argv[]) {
    Moviestore moviestore;
    moviestore.addMovie("Am Limit", 0);
    moviestore.addMovie("Am Limit", 0);
    moviestore.addMovie("Am Limit", 0);
    moviestore.addMovie("Am Limit", 0);
    moviestore.addMovie("Biene Maja", 0);
    moviestore.addMovie("Kill Bill vol. 1", 18);
    moviestore.addMovie("Texas Chainsaw Massacre", 18);
    moviestore.addClient("Jan Mayer", 17);
    moviestore.addClient("Helga Maier", 18);
    moviestore.rentMovie("Am Limit", "Jan Mayer");
    moviestore.rentMovie("Biene Maja", "Jan Mayer");
    moviestore.rentMovie("Biene Maja", "Jan Mayer");
    moviestore.rentMovie("Kill Bill vol. 1", "Jan Mayer");
    cout << moviestore << endl;
    moviestore.handInMovie("Biene Maja");
    moviestore.addClient("Jan Mayer", 17);
    moviestore.addClient("Jan Mayer", 17);
    moviestore.addClient("Jan Mayer", 17);
    moviestore.addClient("Jan Mayer", 17);
    cout << moviestore << endl;
    return 0;
}

