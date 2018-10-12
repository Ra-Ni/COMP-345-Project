#pragma once

#include <string>
using namespace std;

class graphmap;
// struct monster,
struct card;
struct token;
class ClsDice;


class Player
{
/*
 	monster* monster;
	graphmap* currentZone;
	card* cards;
	token* tokens;
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
    /*Player(char monsterId, char graphmapId , char tokensId) {}
        */




};

