#include "int.h"

void Int::setIntZero()
{
	var = 0;
}

void Int::initializeInt(int num)
{
	var = num;
}

void Int::displayInt()
{
	std::cout << var << '\n';
}

int Int::addTwoInts(Int& var1, Int& var2)
{
	return var1.var + var2.var;
}
