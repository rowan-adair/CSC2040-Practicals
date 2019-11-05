#include "s_array.h"
#include <iostream>

using namespace std;
template<typename T>
s_array<T>::s_array(int size) : size(size)
{
	if (size > 0)
	{
		data = new T[size];
	}
	else {
		cout << "Invalid array size " << size << endl;
		exit(1);
	}
}
template<typename T>
s_array<T>::~s_array()
{
	delete[] data;
}

template<typename T>

int& s_array<T>::operator[](int i)
{
	if (i < 0 || i >= size)
	{
		cout << "index " << i << " is out of bounds." << endl;
		exit(1);
	}
	return data[i];
}
