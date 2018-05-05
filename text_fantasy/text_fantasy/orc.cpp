#include "orc.h"
#include <stdlib.h>    
#include <time.h>

orc::orc()
{
	monster_type = "orc";
	srand(time(NULL));
	HP = 200;
	ATK = rand() % 50 + 50; //atleast 50 atk
}

orc::~orc()
{

}
