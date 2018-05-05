#include "Monster.h"
#include "Hero.h"
#include <stdio.h>
Monster::Monster()
{

}

Monster::~Monster()
{

}

int Monster::gethp()
{
	return HP;
}
void Monster::Strike(Hero &x)
{
	x.HP -= ATK;
	printf("Yucha hp now %d\n", x.HP);
}