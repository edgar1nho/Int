#include <iostream>

class Int
{
	private:
		int var;
	public:
		void setIntZero();
		void initializeInt(int num);
		void displayInt();
		int addTwoInts(Int& var1, Int& var2);
};
