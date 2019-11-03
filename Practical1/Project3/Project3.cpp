#include "Project3.h"
#include "ins_rem.h"
#include <iostream>

using namespace std;

int main() 
{
	
}

void print_array(int* example) 
{
	for (int t = 0; t < 10; t++)
		cout << *example++ << endl;
}