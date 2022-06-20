#include "Beast.h"

int Beast::Eat(int food) 
{
	if (!Live()) return 0;
	GetOlder();
	return stomache += food;
}

int Beast::Poop(int volume) 
{
	if ((stomache -= volume) <= 0)
		stomache = 0;
	return stomache;
}