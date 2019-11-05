#include "find_max.h"
#include <iostream>

using namespace std;

int main() {
	// Pr1 Q1

	// Int test, result should be 1.
	int array_len = 5;
	int arr_int[] = { 21,100,4,30,4};
	int* arr_int_p = arr_int;
	cout << "The max integer value index is " << find_max(arr_int_p, array_len) << endl;
	//delete[] arr_int;

	// Double tes result should be 2
	double arr_double[] = { 1.2,1.3,1.6,1.5,1.1 };
	double* arr_double_p = arr_double;
	cout << "The max double value index is " << find_max(arr_double_p, array_len) << endl;
	//delete[] arr_double

	// Pr1 Q2
	// Int test, result should be 100.
	int arr_int2[] = { 21,100,4,30,4 };
	int* arr_int_p2 = arr_int2;
	cout << "The max integer value index is " << _find_max(arr_int_p2, array_len) << endl;
	//delete[] arr_int;

	// Double tes result should be 1.6
	double arr_double2[] = { 1.2,1.3,1.6,1.5,1.1 };
	double* arr_double_p2 = arr_double2;
	cout << "The max double value index is " << _find_max(arr_double_p2, array_len) << endl;
	//delete[] arr_double
	return 0;
}