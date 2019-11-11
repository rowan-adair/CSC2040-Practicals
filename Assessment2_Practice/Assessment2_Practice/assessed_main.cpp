#include "xArray.h"
#include "uConvert.h"
#include <iostream>
#include <string>
#include "assessed_main.h"

using namespace std;

template<typename T>
T search_r(T* array, int array_len, T key) {
	if (!array || array_len <= 0) {
		cout << "Invalid array" << endl;
		return T();
	}
	for (int i = array_len - 1; i >= 0; i--)
	{
		if (array[i] == key) return key;
	}
	return T();
}

int main() {
	xArray array(3);
	array.character[0] = 'a';
	array.character[1] = '2';
	array.character[2] = '%';
	if (array.size > 0)
	{
		xArray array2 = array;
		for (int i = 0; i < 3; i++)
		{
			array.ascii[i] = array2.character[i];
		}
	}
	cout << array.ascii[1] << endl;
	return 0;
}

int main2() {

	xArray a(3);
	a.ascii[0] = 35; a.ascii[1] = 42; a.ascii[2] = 64;

	xArray b(2);
	b.ascii[0] = 97; b.ascii[1] = 100;
	
	if (a <= b == true) cout << "a <= b is true" << endl;
	if (b <= a == false) cout << "b <= a is false" << endl;

	return 0;
}

int main3() {
	int array_len = 5;
	double* d_array = new double[array_len];
	double d = 0;
	for (int i = 0; i < array_len; i++) {
		d_array[i] = d;
		d++;
	}
		
	cout << search_r(d_array, array_len, d_array[3]) << endl;
	cout << search_r(d_array, array_len, 4000.0) << endl;

	string s_array[] = { "&ab", "134", "z3p","8ps","9j=" };
	cout << search_r(s_array, array_len, s_array[2]) << endl; 
	return 0;
}


int main4() {
	// a base class pointer
	uConvert* base_ptr = 0;
	// menu to take input from the users
	cout << "\nEnter 1 for litre to gallon conversion\n"
		<< "Enter 2 for Fahrenheit to Celsius conversion\n"
		<< "Enter 3 for feet to meter conversion\n"
		<< "Enter 4 for degree to radian conversion\n"
		<< "Enter 5 for radian to degree conversion\n";
	int option;
	cin >> option;
	// pointing base_ptr to the derived object of the user's choice
	switch (option) {
	case 1:
		base_ptr = new l2g;
		break;
	case 2:
		base_ptr = new f2c;
		break;
	case 3:
		base_ptr = new f2m;
		break;
	case 4:
		base_ptr = new d2r;
		break;
	case 5:
		base_ptr = new r2d;
		break;
	default:
		return 0;
	}
	// invoking the conversion
	base_ptr->read_unit();
	base_ptr->convert();
	base_ptr->print();
	delete base_ptr;
	char choice = ' ';
	cout << "Do you want to use the converter? (y/n)" << endl;
	cin >> choice;
	if (choice == 'y')
		main();
	else
		return 0;
}
