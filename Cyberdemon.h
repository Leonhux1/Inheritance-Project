// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include "Demon.h"

using namespace std;

// Creating a class called Cyberdemon which has inherited features from the class Demon.
class Cyberdemon : public Demon {
    public:
        Cyberdemon();    // Default Constructor
        Cyberdemon(int newStrength, int newHitpoint);     // Initializes inherited members to given values
        int getDamage() const;  // Returns the damage sustained for Cyberdemons
};
