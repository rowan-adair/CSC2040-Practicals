#include "my_functions.h"
#include <iostream>

using namespace std;

void most_least_diff(double a, double b, double c)
{
	double x = fabs(b - a);
	double y = fabs(a - c);
	double z = fabs(b - c);

	double max_diff_num1 = 0.0;
	double max_diff_num2 = 0.0;
	double max_diff;

	double min_diff_num1 = 0.0;
	double min_diff_num2 = 0.0;
	double min_diff;

	// Check all the same
	// If a is b and b is c then all values are equal hence no difference.
	if (a == b && b == c) {
		max_diff_num1 = a;
		max_diff_num2 = a;
		min_diff_num1 = a;
		min_diff_num2 = a;
		min_diff = 0;
		max_diff = 0;
	}

	// X check
	// Max
	if (x >= y && x >= z) {
		max_diff_num1 = a;
		max_diff_num2 = b;
		max_diff = x;
	}// Min
	else if (x <= y && x <= z) {
		min_diff_num1 = a;
		min_diff_num2 = b;
		min_diff = x;
	}

	// Y Check
	if (y >= x && y >= z) {
		max_diff_num1 = a;
		max_diff_num2 = c;
		max_diff = y;
	}// Min
	else if (y <= x && y <= z) {
		min_diff_num1 = a;
		min_diff_num2 = c;
		min_diff = y;
	}

	// Z check
	if (z >= x && z >= y) {
		max_diff_num1 = b;
		max_diff_num2 = c;
		max_diff = z;
	}// Min
	else if (z <= x && z <= y) {
		min_diff_num1 = b;
		min_diff_num2 = c;
		min_diff = z;
	}

	cout << "Most different: " << max_diff_num1 << " " << max_diff_num2 << " with difference = " << max_diff << endl;
	cout << "Least different: " << min_diff_num1 << " " << min_diff_num2 << " with difference = " << min_diff << endl;

}

bool admission(int& credits)
{
	if (credits < 3) return false;
	else {
		credits -= 3;
		return true;
	}
}
