#include "part_1.h"
#include "assessed_main.h"
#include <iostream>


using namespace std;




int main2()
{

	cout << get_mid(10, 46, 1) << endl; // Output should be 10.


	// Test reverse.
	double u = 1.1, v = 2.3, x = 4.4, y = 8.0;
	cout << "Original" << endl;
	cout << u << endl;
	cout << v << endl;
	cout << x << endl;
	cout << y << endl;

	cout << "Reversed" << endl;
	reverse(u, v, x, y);
	cout << u << endl;
	cout << v << endl;
	cout << x << endl;
	cout << y << endl;

	return 0;
}

int main()
{
	double e = 2.718;
	double* pe = &e;	
	cout << *pe << endl;
	*pe = *pe * 3;
	cout << *pe << endl;
	return 0;
}

