#pragma once
//#include "core.h"
//#include "Dice.h"
//#include "DiceFacility.h"

class Player : public graphmap
{
private:
 	monster monster;
	DiceFacility::DiceFacility df;
	Card* cards;
	token* token;
	nodes* currentZone;
	


public:

	void move();
	void rollDice();
	void resolveDice();
	void BuyCards(Card* card);
	




public:
	Player();
	~Player();
	Player(monster m, *nodes cz, DiceFacility df, token* t) {}
		
	};
