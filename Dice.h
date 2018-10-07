#pragma once
class Dice
{
public:
	Dice();
	const int _numeOfside=6;
	int diceArr[6];
	void roll();
	~Dice();
};

