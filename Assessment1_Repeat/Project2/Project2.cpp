#include <iostream>

using namespace std;

void array_op(int* array, int size)
{

	// (1) test
	if (array == 0 || size <= 0) return;

	// (2) use array indexing to cycle through the elements of array to assign each 
	// element a value
	for (int n = 0; n < size; n++)
		array[n] = n;

	// (3) use array indexing to cycle through the elements of array to print out the 
	// value of each element
	for (int i = 0; i < size; i++)
		cout << array[i] << endl;

	// (4) use pointer arithmetic to cycle through the elements of array to double the 
	// value in each element
	int* temp_arr = array;
	for (int i = 0; i < size; i++) {
		*temp_arr *= 2;
		temp_arr++;
	}
	temp_arr = array;
	// (5) use pointer arithmetic to print out the value of the element that is 
	// 1/3-size away from the beginning 
	cout << *(temp_arr + (size/ 3)) << endl;
}


int main2() {
	int size = 100;
	int array[100];
	array_op(array, size);
	return 0;
}

int main() {

	double pi = 3.1415926;
	double* ppi = &pi;

	double array[40];
	double* parray = array;

	for (int i = 0; i < 40; i++)
	{
		parray[i] = *ppi;
	}
	
	double* array2 = new double[40];
	for (size_t i = 0; i < 40; i++)
	{
		array2[i] = array[i];
	}

	for (size_t i = 0; i < 40; i++)
	{
		cout << array2[i] << endl;
	}

	delete[]  array2;

	return 0;

}