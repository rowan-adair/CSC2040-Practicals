#include "xArray.h"
#include <ostream>

using namespace std;

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

bool xArray::operator<=(const xArray& arr)
{
	int totalA = 0;
	int totalB = 0;
	for (int i = 0; i < size; i++)
		totalA += ascii[i];
	for (int i = 0; i < arr.size; i++)
		totalB += arr.ascii[i];
	if (totalA <= totalB) 
		return true;
	return false;
}

bool xArray::operator>=(const xArray& arr)
{
	int totalA = 0;
	int totalB = 0;
	for (int i = 0; i < size; i++)
		totalA += ascii[i];
	for (int i = 0; i < arr.size; i++)
		totalB += arr.ascii[i];
	if (totalA >= totalB)
		return true;
	return false;
}

bool xArray::operator==(const xArray& arr)
{
	int totalA = 0;
	int totalB = 0;
	for (int i = 0; i < size; i++)
		totalA += ascii[i];
	for (int i = 0; i < arr.size; i++)
		totalB += arr.ascii[i];
	if (totalB == totalB)
		return true; 
	return false;
}



xArray::~xArray()
{
	delete[] character;
	delete[] ascii;
}

ostream& operator<<(ostream& os, xArray arr)
{
	os << "Size : " << arr.size << endl;
	os << "Character : {";
	for (int i = 0; i < arr.size; i++) os << arr.character[i] << ",";
	os << "}" << endl;;
	os << "AsCII : {";
	for (int i = 0; i < arr.size; i++) os << arr.ascii[i] << ",";
	os << "}" << endl;
	return os;
}
