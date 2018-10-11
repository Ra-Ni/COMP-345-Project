#pragma once
class ClsDice
{
public:
	ClsDice();
	~ClsDice();
	int Roll();
	char *GetName(int k);
private:
	int num;
	char *names[6];
};

