// text_fantasy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hero.h"
#include "zombie.h"
#include "orc.h"
#include <stdlib.h>    
#include <time.h>


int main()
{
	Hero Yuusha;
	zombie zomsummon;
	orc orcsummon;


	while (Yuusha.HP > 0 && zomsummon.HP > 0)
	{
		zomsummon.Strike(Yuusha);
		Yuusha.Strike(zomsummon);
	}

	while (Yuusha.HP > 0 && orcsummon.HP > 0)
	{
		orcsummon.Strike(Yuusha);
		Yuusha.Strike(orcsummon);
	}

	getchar();
    return 0;
}

