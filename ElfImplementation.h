// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include "Elf.h"
#include <cstdlib>
#include <ctime>

using namespace std;

// Default constructor for Elf objects which uses a mutator to set the specie
// type to "Elf."
Elf::Elf() : Creature() {
    setSpecies("Elf");
}

// Custom constructor that sets the strength, hitpoints, and the type of specie
// in the member variables of the parent function.
Elf::Elf(int newStrength, int newHitpoint) : Creature(newStrength, newHitpoint){
    setSpecies("Elf");
}

// This function returns the damage.
int Elf::getDamage() const {
    srand(time(0)); // Makes the rand() function operational.
    int damage;
    
    // Creating a creature object and setting it attributes according to the gameplay.
    Creature obj(getStrength(), getHitpoints());
    damage = obj.getDamage();   // Retreiving the damage.
    
    // Professor's code.
    if((rand() % 10) == 0) {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage = damage * 2;
    }
    
    obj.setSpecies(getSpecies());   // Setting the specie for the object created above.
    
    return damage;
}