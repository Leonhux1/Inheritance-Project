// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include "Demon.h"
#include "Cyberdemon.h"


using namespace std;

// Default constructor that sets the specie type to "Cyberdemon" in the parent
// class.
Cyberdemon::Cyberdemon() : Demon() {
    setSpecies("Cyberdemon");
}

// Custom constructor that sets the attributes according to preference. It also sets the specie
// type to "Cyberdemon."
Cyberdemon::Cyberdemon(int newStrength, int newHitpoint) : Demon(newStrength, newHitpoint){
    setSpecies("Cyberdemon");
}

// This function returns the damage.
int Balrog::getDamage() const {
    // Creating a variable for help.
    int damage;
    
    // Creating an object and setting its attributes according to the gameplay.
    Demon obj(getStrength(), getHitpoints());
    damage = obj.getDamage();
    obj.setSpecies(getSpecies());
    
    // Professor's Code.
    cout << "Cyberdemon attack inflicts " << damage << " points!" << endl;
    
    return damage;
}

