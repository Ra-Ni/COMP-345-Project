#pragma once

#include <string>
using namespace std;

class graphmap;
struct card;
struct token;
class ClsDice;


class Player 
{
/*
 	string const name;
	graphmap* currentZone;
	card* cards;
	token* token;
	ClsDice* playerDice;
*/

public:

	void move(graphmap *map);
	void rollDice();
	void resolveDice();
	void BuyCards(card card);
	void EndTurn();




public:
	Player();
	~Player();
	/*Player(string n, graphmap *cz, MonsterBoard *m) {
		name = n;
		*currentZone = *cz;
		*monster = *m;

	};*/

	
	

};

