#include "RandArray.h"
#include <iostream>
using namespace std;
RandArray::RandArray(int len, int max_num) : length(len)
{
	if (len <= 0 || max_num < 0)
		cout << "Invalid Parameters" << endl;
	data = new int[len];
	for (int i = 0; i < len; i++)
		data[i] = rand() % max_num + 1;
}
// c
RandArray::RandArray() {
	length = 0;
	data = 0;
}


RandArray::~RandArray()
{
	delete[] data;
}

void RandArray::print_data()
{
	for (int i = 0; i < length; i++)
		cout << data[i] << endl;
}
