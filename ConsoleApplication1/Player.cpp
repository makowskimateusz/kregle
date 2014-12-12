#include <iostream>
#include <time.h>
#include "player.h"
#include <cstdlib>

using namespace std;

Player::Player() {
	chance_level = (rand() % 10) + 1;
}

void Player::Throw(int player) {
	cout << "\t\t RZUCA GRACZ #" << player << endl;
	
	int chance = rand() % 11;
	cout << "\tSzansa: \t\t" << chance << endl;

	cout << "\tPoziom gracza: \t\t" << chance_level << endl << endl;
	int knocked[3]; // Szanse na zbicie
	knocked[0] = rand() % 4; // Zbite od 0 do 3
	knocked[1] = rand() % 4 + 4; // Zbite od 4 do 7
	knocked[2] = rand() % 3 + 8; // Zbite od 8 do 10

	cout << "\tSzansa low: \t\t" << knocked[0] << endl;
	cout << "\tSzansa medium: \t\t" << knocked[1] << endl;
	cout << "\tSzansa high: \t\t" << knocked[2] << endl;


	cout << "\tChance-level: \n\t\t LOW do " << (5 - (chance_level / 2))-1 << " \n\t\t MEDIUM od " << (5 - (chance_level / 2)) << " do " << (10 - (chance_level / 2))-1 << "\n\t\t HIGH od " << (10 - (chance_level / 2)) << endl;
	
	//Klasa generujaca ramki dla kazdego gracza inne
	if (chance < (5 - (chance_level / 2))) {
		cout << "low: "   << endl;
	}
	else if (chance >= (5 - (chance_level / 2)) && chance < (10 - (chance_level / 2))) {
		cout << "medium: "  << endl;
	}
	else if (chance >= ( 10-(chance_level/2) ) ) {
		cout << "high: "  << endl;
	}
}