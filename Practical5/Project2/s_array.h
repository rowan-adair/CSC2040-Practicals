#ifndef S_ARRAY_H
#define S_ARRAY_H

#include <iostream>

using namespace std;

template<typename T>
class s_array
{
public:
	
	s_array(int size);
	~s_array();
	 T&operator[](int i);
private:
	int size;
	T* data;
};
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
T& s_array<T>::operator[](int i)
{
	if (i < 0 || i >= size)
	{
		cout << "index " << i << " is out of bounds." << endl;
		exit(1);
	}
	return data[i];
}



#endif // !S_ARRAY_H

