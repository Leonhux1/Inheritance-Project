// Name: Faizan Rafieuddin
// RolePlaying

// Including the necessary Preprocessor Directives for the program.
#include <iomanip>
#include <iostream>
#include <string>
#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Demon.h"
#include "Cyberdemon.h"
#include "Balrog.h"

using namespace std;

int main() {
    
    // Creating an object for each type of specie.
	Human obj(20, 20);
	Elf obj1(30, 30);
	Demon obj2(30, 30);
	Cyberdemon obj3(40, 35);
	Balrog obj4(35, 50);
	
	// The Elf is being hit by the Demon.
    obj1.setHitpoints(obj1.getHitpoints() - obj2.getDamage());
    
    // These set of statements checks whether the Elf has died from the previous encounter
    // and outputs the message accordingly.
    if(obj1.getHitpoints() < 0) {
        cout << "AHHH! The Elf got killed by the Demon! Game Over!" << endl;
    }
    
    // The Demon is being hit by the Elf.
    
    obj2.setHitpoints(obj2.getHitpoints() - obj1.getDamage());
    
    // These set of statements checks whether the Demon has died from the previous encounter
    // and outputs the message accordingly.
    if(obj2.getHitpoints() < 0) {
        cout << "AHHH! The Elf got killed by the Demon! Game Over!" << endl;
    }
	return 0;
}