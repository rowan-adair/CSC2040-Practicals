#include "s_array.h"
#include <iostream>

using namespace std;

int main() {
	// Pr2
	// Int test
	//s_array<int> array(10);
	//array[5] = 5;
	//cout << array[5] << endl;
	//array[-1] = 2;
	//cout << array[-1] << endl;

	//// Double test
	//s_array<double> array2(10);
	//array2[5] = 5.0;
	//cout << array2[5] << endl;
	//array2[-1] = 2.0;
	//cout << array2[-1] << endl;

	// Char test
	s_array<char> array3(10);
	array3[5] = 'e';
	cout << array3[5] << endl;
	array3[-1] = 'z';
	cout << array3[-1] << endl;


	return 0;
}