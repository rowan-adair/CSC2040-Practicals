#include "xArray.h"
#include "uConvert.h"
#include <iostream>


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
	const int size = 26;
	char alphabets[size] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	xArray array(size);
	for (int i = 0; i < size; i++)
	{
		array.character[i] = alphabets[i];
	}
	if (array.size > 0)
	{
		xArray array2 = array;
		for (int i = 0; i < size; i++)
		{
			array.ascii[i] = array2.character[i];
		}
	}
	cout << array << endl;
	return 0;
}

int main2() {

	xArray a(2);
	a.ascii[0] = 10; a.ascii[1] = 30;

	xArray b(3);
	b.ascii[0] = 10; b.ascii[1] = 20; b.ascii[2] = 10;
	
	if (a >= b) cout << "a >= b" << endl;
	if (b <= a) cout << "b <= a" << endl;
	if (a == b) cout << "a == b" << endl;
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
		main4();
	else
		return 0;
}


// Pointer test
int main6() {
	const int len = 8;
	int arr[len] = { 1,2,3,4,5,6,7,8 };
	int* arr_ptr = arr;

	for (int* ptr = arr_ptr; ptr < arr_ptr + len; ptr)
	{
		cout << *ptr++ << endl;
	}

	return 0;
}
