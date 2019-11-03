#include "Project3.h"
#include "ins_rem.h"
#include <iostream>

using namespace std;

int main()
{
	int len = 10;
	int* example = new int[len];
	for (int t = 0; t < len; t++) example[t] = t;


	print_array(example);
	
}

void print_array(int* example)
{
	for (int t = 0; t < 10; t++)
		cout << *example++ << endl;
}