#include "my_functions.h"
#include <iostream>

using namespace std;

int main() {

	int credits = 7;
	int num_admissions = 0;
	while (admission(credits)) num_admissions++;
	cout << "number of admissions " << num_admissions << endl;
	cout << "credit points left " << credits << endl;

	return 0;
}