#include "AClass.h"


AClass::AClass(int len, double val)
{
	length = len;
	data = new double[length];
	for (size_t i = 0; i < length; i++)
	{
		data[i] = val;
	}
	
}

AClass::~AClass()
{
	delete[] data;
}