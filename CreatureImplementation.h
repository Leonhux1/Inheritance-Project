// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>
#include "Creature.h"
#include <cstdlib>
#include <ctime>

using namespace std;

// Accessor functions for the member variables.
string Creature::getSpecies() const {
    return species;
}

int Creature::getHitpoints() const {
    return hitpoints;
}

int Creature::getStrength() const {
    return strength;
}

// Mutator functions for the member variables.
void Creature::setStrength(int newStrength) {
    strength = newStrength;
}

void Creature::setHitpotints(int newHitpoint) {
    hitpoints = newHitpoint;
}

void Creature::setSpecies(string newSpecies) {
    species = newSpecies;
}

// Default constructor for Creature objects.
Creature::Creature() {
    strength = 10;
    hitpoints = 10;
    species = "human";
}

// Custom constructor for Creature objects that sets their strength and hitpoints.
Creature::Creature(int newStrength, int newHitpoint) {
    strength = newStrength;
    hitpoints = newHitpoint;
}

// This function returns the damage.
int Creature::getDamage() const {
    srand(time(0)); // Makes the rand() function operational.
    
    // Professor's code.
    int damage;
    damage = (rand() % getStrength()) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    return damage;
}