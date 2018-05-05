#include "Monster.h"
#include "Hero.h"
#include <stdio.h>

Hero::Hero()
{
	HP = 2000;
	ATK = 50;
}

Hero::~Hero()
{

}

void Hero::Strike(Monster &x)
{
	x.HP -= ATK;
	printf("%s hp now %d\n",x.monster_type, x.HP);
}