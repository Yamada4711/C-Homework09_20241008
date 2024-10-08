#include "rand.h"
#include <iostream>
#include <ctime>

void InitRand()
{
	srand((unsigned int)time(NULL));
}