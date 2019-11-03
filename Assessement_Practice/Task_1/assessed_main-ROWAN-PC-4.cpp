#include "part_1.h"
#include "assessed_main.h"
#include "Person.h"
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

int main3()
{
	double e = 2.718;
	double* pe = &e;
	*pe = *pe * 3;
	cout << *pe << endl;
	return 0;
}


int main4()
{
	double pi = 3.1415926;
	double* ptr = &pi;
	cout << *ptr << endl;
	return 0;
}

void fill_and_sum(int* array, int& array_sum, int array_len, int i0)
{
	if (array == NULL || array_len <= 0) {
		cout << "Invalid array" << endl;
		return;
	}
	int* ptr = array;
	for (int i = 0; i < array_len; i++){
		*ptr++ = i0 + i;
		// missing command
	}
	delete[] ptr;
	//for (int i = 0; i < array_len; i++);
		 //cout << *ptr++ << endl;
	/* missing loop to calculate sum */
}
int main5() {
	int a[10];
	int s = -1;
	fill_and_sum(a, s, 10, 1);
	cout << "The sum of the array elements is :" << s << endl; return 0;
}

int main() {
	// (a)
	Person a("Rowan", "Adair", "1", 1999);
	cout << a.get_family_name() << endl;

	// (b)
	Person* b = new Person();
	b->set_ID_number("65536");
	cout << b->get_ID_number() << endl;
	delete b;

	// (c)
	Person* arr_person = new Person[40];
	arr_person->set_birth_year(2000);
	cout << arr_person[40].get_birth_year() << endl;
	delete[] arr_person;

	return 0;
}