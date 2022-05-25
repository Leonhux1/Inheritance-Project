// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include "Demon.h"

using namespace std;

// Creating a class called Balrog which has inhertied features from the class Demon.
class Balrog : public Demon {
    public:
        Balrog();    // Default Constructor
        Balrog(int newStrength, int newHitpoint);     // Initializes inherited members to given values
        int getDamage() const;  // Returns the damage sustained for Balrogs
};