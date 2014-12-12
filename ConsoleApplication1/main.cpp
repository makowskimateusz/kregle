#include <iostream>
#include <time.h>
#include "player.h"
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	Player player[4];


	for (int i = 0; i < 4; i++) {
		cout << "Poziom gracza #" << i+1 << " - " << player[i].chance_level << endl;
	}
	for (int i = 0; i < 10; i++) {
		player[0].Throw(1);
	}

	
	//player[2].Throw(3);
	
	/*srand(time(NULL));
	int low, medium, high, chance;
	int gracz[19];
	for (int i = 1; i <= 20; i++) {
		low = rand() % 4; // Zbite od 0 do 3
		medium = rand() % 4 + 4; // Zbite od 4 do 7
		high = rand() % 3 + 8; // Zbite od 8 do 10
		//cout << "Low -> " << low << " Medium -> " << medium << " High -> " << high <<  endl;
	
		cout << "Low -> " << low << " Medium -> " << medium << " High -> " << high << endl;
	
		chance = rand() % 11;
		cout << "Szansa: " << chance << endl;
		if (chance < 3) {
			cout << "Zbito: " << low << endl;
			gracz[i] = low;
		}
		else if (chance >= 3 && chance < 8) {
			cout << "Zbito: " << medium << endl;
			gracz[i] = medium;
		}
		else if (chance >= 8) {
			cout << "Zbito: " << high << endl;
			gracz[i] = high;
		}

		cout << "kolejny rzut" << endl << endl;
	}
	int srednia;
	for (int i = 1; i <= 10; i++) {
		cout << "Runda #" << i << endl;
		if (gracz[i] == 10) {
			cout << "Rzut #" << i << " STRIKE" << endl;
			cout << "X" << endl;
		}
		else {
			cout << "Rzut #" << i  << " Trafien: " << gracz[i] << endl;
			cout << "Rzut #" << i + 1 << " Trafien: " << gracz[i + 1] << endl;
		}
		
		
	}
	*/

	system("pause");
	return 0;
}