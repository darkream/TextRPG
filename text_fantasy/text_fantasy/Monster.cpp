#include "Monster.h"
#include "Hero.h"
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>
#include "zombie.h"
#include "orc.h"
Monster::Monster()
{
	
}

Monster::~Monster()
{

}


void Monster::Strike(Hero &x)
{
	x.HP -= ATK;
	printf("%s Hit %d damage.  Hero hp now %d\n",monster_type,ATK, x.HP);
}

void Monster::Summon()
{
	srand(time(NULL));
	if (rand() % 2 == 0)
	{
		//zombie type
		monster_type = "zombie";
	}
	else
	{
		//orc type
		monster_type = "orc";
	}

}