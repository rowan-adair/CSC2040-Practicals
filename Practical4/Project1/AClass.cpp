#include "AClass.h"
#include <iostream>
using namespace std;

// Constructor
AClass::AClass(int len, double val)
	: length(len)
{
	if (len < 0) {
		cout << "Invalid data length = " << len << endl;
		data = NULL;
	}

	else {
		data = new double[length];
		for (int i = 0; i < length; i++)
			data[i] = val;
	}
}

// Destructor
AClass::~AClass()
{
	// delete data if it is not NULL
	if (data) delete[] data;
}
