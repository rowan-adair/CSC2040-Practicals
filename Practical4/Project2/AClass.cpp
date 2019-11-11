#include "AClass.h"
#include <iostream>
using namespace std;

// Constructor
AClass::AClass(int len, double val):length(len){
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

AClass::AClass(const AClass& arr)
{
	length = arr.length;
	data = new double[length];
	for (int i = 0; i < length; i++)
		data[i] = arr.data[i];
}

void AClass::operator+=(const AClass& b) {
	int len = (length < b.length) ? length : b.length;
	for (int i = 0; i < len; i++)
		data[i] += b.data[i];
	for (int i = 0; i < length; i++)
		cout << data[i] << endl;
	cout << endl;

}

// Destructor
AClass::~AClass()
{
	// delete data if it is not NULL
	if(data) delete[] data;
}
