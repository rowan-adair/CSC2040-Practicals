#include "xArray.h"

xArray::xArray(int size):size(size)
{
	character = new char[size];
	ascii = new int[size];
}

xArray::xArray(const xArray& arr): 
	size(arr.size) {
	ascii = new int[size];
	character = new char[size];
	for (size_t i = 0; i < size; i++) {
		ascii[i] = arr.ascii[i];
		character[i] = arr.character[i];
	}
}

bool xArray::operator<=(const xArray& b)
{
	int totalA{}, totalB{};
	for (size_t i = 0; i < size; i++)
		totalA += ascii[i];
	for (size_t i = 0; i < b.size; i++)
		totalB += b.ascii[i];
	if (totalA <= totalB) return true;
	else return false;
}

xArray::~xArray()
{
	delete[] character;
	delete[] ascii;
}


