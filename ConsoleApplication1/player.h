#include <iostream>

class Player {
public:
	Player();
	void Throw(int player);

	int chance_level;
	int frame[9][2];
};