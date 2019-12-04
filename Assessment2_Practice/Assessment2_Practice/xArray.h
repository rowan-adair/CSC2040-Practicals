#ifndef XARRAY_H
#define XARRAY_H

#include <ostream>

using std::ostream;

class xArray
{
public:
	// Consturctors and desturctors
	xArray(int size);
	xArray(const xArray &arr);
	~xArray();
	// Conditional Operators
	bool operator<=(const xArray& arr);
	bool operator>=(const xArray& arr);
	bool operator==(const xArray& arr);
	friend ostream& operator<<(ostream& os, xArray arr);
	int size;
	char* character;
	int* ascii;	
};

#endif // !XARRAY_H


