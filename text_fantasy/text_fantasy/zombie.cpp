#include "zombie.h"
#include <stdlib.h>    
#include <time.h>

zombie::zombie()
{
	monster_type = "zombie";
	srand(time(NULL));
	HP = 100;
	ATK = rand() % 50 + 11; //atleast 10 atk
}

zombie::~zombie()
{

}

