#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int sample[10];
	for (size_t i = 0; i < 10; i++)
	{
		sample[i] = i;
	}

	for (size_t i = 0; i < 10; i++)
		cout << i << " " << sample[i] << endl;
	

	char sample2[20] = "This is a test.";

	cout << sample2 << endl; 

	int* p = sample;
	for (int i = 0; i < 10; i++)
		*p++ = pow(i,2);
	
	p = sample;
	
	for (int i = 0; i < 10; i++)
		cout << i << " " << *p++ << endl;

	delete p;

	return 0;
}