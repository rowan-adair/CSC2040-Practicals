#include "find_max.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int array_len = 30;
	// Pr1 Q1
	int arr_int[30];
	int* arr_int_p = arr_int;
	 //Int test, result should be 1.
	for (int i = 0; i < array_len; i++)
	{
		arr_int_p[i] = (rand() % 10) + 1;
	}
	cout << "The max integer value index is " << find_max(arr_int_p, array_len) << endl;

	// Double tes result should be 2
	double arr_double[30];
	double* arr_double_p = arr_double;
	for (size_t i = 0; i < array_len; i++)
	{
		arr_double_p[i] = (rand() % 100000 - 500 / 1000.0) + 1.0;
	}
	cout << "The max double value index is " << find_max(arr_double_p, array_len) << endl;

	// Pr1 Q2
	// Int test, result should be 100.
	int arr_int2[30];
	int* arr_int_p2 = arr_int2;
	//Int test, result should be 1.

	for (int i = 0; i < array_len; i++)
	{
		arr_int_p2[i] = (rand() % 100) + 1;
	}
	cout << "The max integer value index is " << _find_max(arr_int_p2, array_len) << endl;

	// Double tes result should be 1.6
	double arr_double2[30];
	double* arr_double_p2 = arr_double2;
	for (size_t i = 0; i < array_len; i++)
	{
		arr_double_p2[i] = (rand() % 1000 - 500 / 1000.0) + 1.0;

	}
	cout << "The max double value index is " << _find_max(arr_double_p2, array_len) << endl;
	
	return 0;
}