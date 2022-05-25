// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"

using namespace std;

// Creating a class called Human which has inherited features from the class Creature.
class Human : public Creature {
    public:
        Human();    // Default Constructor
        Human(int newStrength, int newHitpoint);   // Initializes inherited members to given values
        int getDamage() const;  // Returns the damage sustained for Humans
};
