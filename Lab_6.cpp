/***
 * CSE 2010 Fall 2023
 * Lab #6
 * Adrian Leal #007647166
 * 12/1/23
 *
 * In this lab, we will learn how to derive a class from a base class and learn hopw functions and variables can be passed down to the class
 *
 * Setting up the _main file was challenging because the underscore ended up being the difference in setting it up
 *
***/

#include <iostream>
#include "Charmander.h"
using namespace std;

int main()
{
    // Charmander first = Charmander();
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    cout << "-------Constructor Created---------\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType);

    // Charmander
    cout << "\n-------Direct Speak---------\n";
    charlie.speak();

    // Pokemon pointer to Charmander
    Pokemon * p1 = &charlie ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    (*p1).speak();

    // Charmander pointer to Charmander
    Charmander * c1 = &charlie ;
    cout << "\n------- Speak called from Charmander Pointer---------\n";
    (*c1).speak();
    
    // Charmander
    cout << "\n------- Print Stats---------\n";
    charlie.printStats();
}