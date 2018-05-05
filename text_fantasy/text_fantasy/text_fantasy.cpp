// text_fantasy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hero.h"
#include "zombie.h"
#include "orc.h"
#include <stdlib.h>    
#include <time.h>
#include <windows.h>

int main()
{
	Hero Yuusha;
	Monster mon[120];
	int montrack=0;
	while (montrack != 100)
	{
		//begin summon
		srand(time(NULL));
		Sleep(100);
		mon[montrack].Summon();
		//fight
		if (mon[montrack].monster_type == "zombie")
		{
			zombie a;
			while (Yuusha.HP > 0 && a.HP > 0)
			{
				a.Strike(Yuusha);
				if (Yuusha.HP <= 0)break;
				else Yuusha.Strike(a);
			}
		}
		else if (mon[montrack].monster_type == "orc")
		{
			orc b;
			while (Yuusha.HP > 0 && b.HP > 0)
			{
				b.Strike(Yuusha);
				if (Yuusha.HP <= 0)break;
				else Yuusha.Strike(b);
			}
		}
		if (Yuusha.HP <= 0)
		{
			printf("Hero dead\n");
			break;
		}
		else
		{
			printf("Monster dead\n\n");
		}
		montrack++;
	}

	/*
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
	*/

	if (montrack >= 100)//defeat all
	{
		printf("\nALL MONSTER DEFEAT\n");
	}
	printf("\nGAME OVER\n");
	getchar();
    return 0;
}

