// Name: Faizan Rafieuddin
// RolePlaying

// Including necessary preprocessor directives.
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Avoids redefiniton.
#ifndef Creature_H
#define Creature_H

// The parent Class to be used in the project.
class Creature{
    
    // Creating member variables that will store attributes for the characters.
    private:
        int strength;   // How much damage we can inflict
        int hitpoints;  // How much damage we can sustain
        string species;    // Returns the type of specie
    
    public:
        Creature(); // Initialize to human, strength 10, hitpoints 10
        Creature(int newStrength, int newHitpoint);     // Initialize members to given values
        
        // Returns member variables.
        int getStrength() const;
        int getHitpoints() const;
        string getSpecies() const;
        
        // Sets member variables.
        void setStrength(int newStrength);
        void setHitpoints(int newHitpoint);
        void setSpecies(string newSpecies);
        
        // Returns the damage
        int getDamage() const;
};
#endif