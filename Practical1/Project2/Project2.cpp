#include <iostream>

using namespace std;

double* ptr_to_cube_of(double x)
{
	double cube = x * x * x;
	return &cube;
}




int main() 
{
	// (1)
	//int i = 27;
	//int* i_ptr = &i; // declare a pointer and intialise it to the address of i
	//cout << "value in i is " << i << endl;
	//cout << "address of i is " << i_ptr << endl;
	//cout << "value from dereferencing pointer is " << *i_ptr << endl;
	//*i_ptr = 35; // change the value in i through pointer
	//cout << "value in i is " << i << endl;
	//double* d_ptr = NULL; // declare a pointer and initialise it to a NULL pointer
	//cout << "value in pointer is " << d_ptr;
	//*d_ptr = 0.25; // error! NULL is not a valid memory address
	// // always test a pointer before using it
	// // comment the above line & run the following instead, to avoid crush
	//if (d_ptr != NULL)* d_ptr = 0.25; // or if(d_ptr != 0) or if(d_ptr) *d_ptr = 0.25;
	// Q1	
	/*
		The value at address 00EFFE84 which was originally 27
		becomes 35 hence the value stored has been changed but
		not the address itself.
	*/
	// Q2
	/*
		i_ptr is the address and *i_ptr is the value stored at the address. 
	*/


	// (2)

	int x = 10;
	int* p = &x;
	*p = x;
	cout << *p << endl;
	
	// (3)

	/*int array[10];
	int* p2 = array;
	for (size_t i = 0; i < 10; i++) *p2++ = i * i;
	for (size_t i = 0; i < 10; i++) cout << array[i] << endl;*/

	// (4)

	double* px3 = ptr_to_cube_of(4.0);
	cout << *px3 << endl;

}

