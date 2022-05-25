// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"

using namespace std;

// Creating a class called Elf which has inherited features from the class Creature.
class Elf : public Creature {
    public:
        Elf();    // Default Constructor
        Elf(int newStrength, int newHitpoint);   // Initializes inherited members to given values
        int getDamage() const;  // Returns the damage sustained for Elves
};
