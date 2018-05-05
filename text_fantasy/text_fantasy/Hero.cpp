#include "Monster.h"
#include "Hero.h"
#include <stdio.h>

Hero::Hero()
{
	HP = 20000;
	ATK = 50;
}

Hero::~Hero()
{

}

void Hero::Strike(Monster &x)
{
	x.HP -= ATK;
	printf("Hero Hit %d damage. %s hp now %d\n",ATK,x.monster_type, x.HP);
}