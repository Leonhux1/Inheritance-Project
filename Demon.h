// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"

using namespace std;

// Avoids redefiniton.
#ifndef H_Demon
#define H_Demon

// Creating a class called Demon which has inherited features from the class Creature.
class Demon : public Creature {
    public:
        Demon();    // Default Constructor
        Demon(int newStrength, int newHitpoint);    // Initializes inherited members to given values
        int getDamage() const;  // Returns the damage sustained for Demons
};
#endif