#include "Person.h"
#include <iostream>

using namespace std;

int main() {
	Person* a = new Person("Rowan", "Adair", "2", 1999);
	Person* b = new Person("Hazel", "Adair", "3", 1999);

	if(b>=a){
		cout << "B is greater than A" << endl;
	}
	if (a <= b) {
		cout << "A is less than B" << endl;
	}
	else {
		cout << "Theres been a problem" << endl;
	}

}