#include <iostream>

using namespace std;

double* ptr_to_cube_of(double x)
{
	double cube = x * x * x;
	return &cube;
}

int main()
{
	//int i = 27;
	//int* i_ptr = &i; // declare a pointer and intialise it to the address of i
	//cout << "value in i is " << i << endl;
	//cout << "address of i is " << i_ptr << endl;
	//cout << "value from dereferencing pointer is " << *i_ptr << endl;
	//*i_ptr = 35; // change the value in i through pointer
	//cout << "value in i is " << i << endl;
	//double* d_ptr = NULL; // declare a pointer and initialise it to a NULL pointer
	//cout << "value in pointer is " << d_ptr << endl;
	//*d_ptr = 0.25; // error! NULL is not a valid memory address
	//// always test a pointer before using it
	//// comment the above line & run the following instead, to avoid crush
	//if (d_ptr != NULL) *d_ptr = 0.25; // or if(d_ptr != 0) or if(d_ptr) *d_ptr = 0.25

	// (2)

	int x = 10;
	int* p = &x;
	cout << *p << endl << endl;

	// (3)
	int array[10];
	int* p2 = array;
	for (int i = 0; i < 10; i++) *p2++ = i * i;
	p2 = array;
	for (int i = 0; i < 10; i++) cout << *p2++ << endl;

	// (4)
	double* px3 = ptr_to_cube_of(3.0);
	cout << *px3 << endl;

}
