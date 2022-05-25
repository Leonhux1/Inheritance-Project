// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include "Human.h"

using namespace std;

// Default constructor for Human objects which initializes the attributes
// accordingly. Humans are a default character as depicted from the project
// instructions.
Human::Human() : Creature() {
    setSpecies("Human");
    setStrength(10);
    setHitpoints(10);
}

// Custom constructor that sets the strength, hitpoints, and the type of specie
// in the member variables of the parent function.
Human::Human(int newStrength, int newHitpoint) : Creature(newStrength, newHitpoint){
    setSpecies("Human");
}



