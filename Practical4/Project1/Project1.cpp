#include "Person.h"
#include <iostream>

using namespace std;

int main() {
	try
	{
		Person* a = new Person("Rowan", "Adair", "2", 1999);
		Person* b = new Person("Hazel", "Adair", "3", 1999);

		if (b >= a) {
			cout << b->get_ID_number() << endl;
		}
		else {
			cout << a->get_ID_number() << endl;
		}
		delete a;
		delete b;

		return 0;

	}
	catch (const std::exception&)
	{
		cout << "There's been a problem";
		return 0;
	}
	
}