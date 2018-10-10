#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player 
{

 	string const name;
	MonsterBoard *monster;
	Map* currentZone;
	Card cards[];
	int token;
	Dice playerDice;


public:

	void move(Map *map);
	void rollDice();
	void resolveDice();
	void BuyCards(Cards card);
	void EndTurn();




public:
	Player();
	~Player();
	Player(string n, Map *cz, MonsterBoard *m) {
		name = n;
		*currentZone = *cz;
		*monster = *m;

	}

};

