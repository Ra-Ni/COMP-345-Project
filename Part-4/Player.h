#pragma once

class dicefacility;
class graphmap;
struct monster;
struct card;
struct token;


struct genericShared {
	static graphmap* currentZone;
};



class Player
{
 	monster* monsters;
	card* cards;
	token* tokens;
	dicefacility* playerDice;


public:
    Player();
	~Player();
    void move(int n);
    void rollDice() {

    }
    void resolveDice();
    void BuyCards(card card);
    void EndTurn();





};

