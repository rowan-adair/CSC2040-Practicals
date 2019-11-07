#ifndef XARRAY_H
#define XARRAY_H

class xArray
{
public:
	xArray(int size);
	xArray(const xArray &arr);
	bool operator<=(const xArray& b);
	~xArray();

	int size;
	char* character;
	int* ascii;
};

#endif // !XARRAY_H


