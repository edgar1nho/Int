#include "Int.h"

int main()
{
	Int num1;
	Int num2;
	Int num3;
	num2.initializeInt(5);
	num3.initializeInt(4);
	num1.initializeInt(num1.addTwoInts(num2,num3));
	num1.displayInt();
}
