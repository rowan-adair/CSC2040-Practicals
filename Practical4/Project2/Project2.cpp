#include "AClass.h"
#include <iostream>

int main()
{
	AClass* x = new AClass(10, -1.0);
	AClass y = *x;

	delete x;

	AClass z(20, 1);
	z += y;
	return 0;
}