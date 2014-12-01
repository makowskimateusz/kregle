#include <iostream>
#include <time.h>
#include "player.h"
#include <cstdlib>

using namespace std;

Player::Player() {
	srand(time(NULL));
	cout << rand() % 5 << endl;
	cout << "Tworze gracza" << endl;
}