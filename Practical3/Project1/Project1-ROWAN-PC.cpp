#include "Project1.h"
#include "Person.h"
#include <iostream>

using namespace std;

int main() {
	// 2
	Person* a = new Person("Rowan", "Adair", "1", 1999);
	cout << a->get_birth_year() << endl;

	
	// 3
	Person* b = new Person();
	cout << &b << endl;
	b->set_family_name("Smith");
	cout << b->get_family_name() << endl;
	
	// 4
	Person* c = new Person("Danny", "Devito", "2", 1944);
	cout << &c << endl;
	cout << c->get_ID_number() << endl;
	return 0;
	

}