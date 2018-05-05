#pragma once
class Monster;
class Hero
{
public:

	Hero();
	~Hero();
	void Strike(Monster &x);
	int ATK;
	int HP;
};
