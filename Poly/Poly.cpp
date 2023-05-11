#include <iostream>
#include "zwierze.h"

int main()
{
    Zwierze zwierze;

    // twoerzenie obiektu pies
    Pies pies;
    zwierze = static_cast<Zwierze>(pies);
    string output;
    zwierze.dzwiek();
    
    // Tworzenie obiektu kot
    Kot kot;
    zwierze = static_cast<Zwierze>(kot);
    zwierze.dzwiek();

    return 0;

}


