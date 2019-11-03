#include "Project1.h"
#include "Person.h"
#include <iostream>

using namespace std;

int main() {
	// 2
	Person* a = new Person("Rowan", "Adair", "1", 1999);
	cout << a->get_birth_year() << endl;
	delete a;

	// 3
	Person* b = new Person();
	cout << &b << endl;
	b->set_family_name("Smith");
	cout << b->get_family_name() << endl;
	delete b;
	// 4
	Person* c = new Person("Danny", "Devito", "2", 1944);
	cout << &c << endl;
	cout << c->get_ID_number() << endl;
	delete c;

	// 5
	Person* d = new Person();
	cout << &d << endl;
	d->set_birth_year(2005);
	cout << d->get_birth_year() << endl;
	delete d;

	// 6
	Person arr[385];
	Person* ptr = arr;
	cout << &arr[0] << endl;

	
	return 0;
	

}