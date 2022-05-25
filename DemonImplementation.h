// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include "Demon.h"
#include <cstdlib>
#include <ctime>

using namespace std;

// Default constructor that sets the specie type to "Demon."
Demon::Demon() : Creature() {
    setSpecies("Demon");
}

// Custom constructor that sets the attribtues according to preference. It also sets
// the specie type to "Demon."
Demon::Demon(int newStrength, int newHitpoint) : Creature(newStrength, newHitpoint) {
    setSpecies("Demon");
}

// This function returns the damage.
int Demon::getDamage() const {
    srand(time(0));     // Makes the rand() function operational.
    int damage;
    
    // Creating a Creature object and setting its attributes according to the gameplay.
    Creature obj(getStrength(), getHitpoints());
    damage = obj.getDamage();
    
    // Professor's code.
    if((rand() % 100) < 5) {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
    }
    
    // Setting the specie type for the object created above.
    obj.setSpecies(getSpecies());
    
    return damage;
}