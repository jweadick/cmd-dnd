#pragma once
#include <map>
#include "drace.h"

class Character
{
public:
	Character();
	~Character();

private:
	dRace drace;
	int hp;
	int ac;
	int speed;
};

Character::Character()
{
}

Character::~Character()
{
}