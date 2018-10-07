#include "Dice.h"
#include <random>
using namespace std;

Dice::Dice()
{
}


void Dice::roll()
{
	for (int i = 0; i < _numeOfside; i++) {

		diceArr[i] = rand() % 6 + 1;
	}
}

Dice::~Dice()
{
}
