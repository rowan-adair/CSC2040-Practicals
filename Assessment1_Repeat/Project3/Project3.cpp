#include "RandArray.h";
#include <iostream>;

using namespace std;

int main() {
	// a
	cout << "Pr3 a" << endl;
	RandArray r1 = RandArray(100, 25);
	r1.print_data();

	// b
	cout << "Pr3 b" << endl;
	RandArray* r2 = new RandArray(50, 10);
	r2->print_data();
	
	// c
	RandArray array1[5];
	RandArray* array2 = new RandArray[5];

}