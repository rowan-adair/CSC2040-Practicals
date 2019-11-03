#include <iostream>

using namespace std;

int main()
{

	int sample[10];
	/*
	for (int i = 0; i < 10; i++)
	{
		sample[i] = i;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "This is sample [" << i << "]: " << sample[i] << endl;
	}*/

	// define a pointer to the start of the sample array using the array name
	int* p = sample;
	// load the sample array using pointer arithmetic
	for (int t = 0; t < 10; t++)
		* p++ = t * t;
	// display the sample array using pointer arithmetic
	p = sample;
	for (int t = 0; t < 10; t++)
		cout << "This is sample [" << t << "]: " << *p++ << endl;
	char sample2[20] = "This is a test.";
	// display the array
	cout << sample2 << endl;
}