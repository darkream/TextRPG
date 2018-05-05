#pragma once
class Hero;

class Monster
{
	
public:

	Monster();
	~Monster();
	void Strike(Hero &x);
	char* monster_type;
	int gethp();
	int HP;
	int ATK;
	
};