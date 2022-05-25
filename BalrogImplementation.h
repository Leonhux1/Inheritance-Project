// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include <cstdlib>
#include "Creature.h"
#include "Demon.h"
#include "Balrog.h"
#include <ctime>

using namespace std;

// Default constructor that sets the specie type to "Balrog" in the parent 
// class.
Balrog::Balrog() : Demon() {
    setSpecies("Balrog");
}

// Custom Constructor that sets the attributes according to preference. It also
// sets the specie type to "Balrog."
Balrog::Balrog(int newStrength, int newHitpoint) : Demon(newStrength, newHitpoint){
    setSpecies("Balrog");
}

// This function returns the damage.
int Balrog::getDamage() const {
    srand(time(0));     // Makes the rand() function operational.
    
    // Creating two int variables for help.
    int damage, damage2;
    
    // Creating a Demon object and setting its attributes according to the gameplay.
    Demon obj(getStrength(), getHitpoints());
    damage = obj.getDamage();
    
    // Professor's code.
    damage2 = (rand() % getStrength()) + 1;
    damage = damage + damage2;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    
    // Setting the type of specie for the object created above.
    obj.setSpecies(getSpecies());
    
    return damage;
}

