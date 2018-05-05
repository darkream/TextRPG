#pragma once
class Hero;

class Monster
{
	
public:

	Monster();
	~Monster();
	void Strike(Hero &x);
	char* monster_type;
	void Summon();
	int HP;
	int ATK;
	
};