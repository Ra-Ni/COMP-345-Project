#pragma once
#include <string>
using namespace std;
class MonsterBoard
{
private:
	int	hp;
	string const MonsterName;
	int victoryPoints;

public:
	int getHp() {
		return hp;
	}
	void setHp(int h) {
		 hp=h;
	}
	string getMonsterName() {
		return MonsterName;
	}
	int getVictoryPoints() {
		return victoryPoints;
	}
	void setVictoryPoints(int v) {
	victoryPoints = v;
	}


public:
	MonsterBoard();
	~MonsterBoard();
};

