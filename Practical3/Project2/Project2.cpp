#include "Project2.h"
#include "AClass.h"
#include <iostream>

using namespace std;

int main() 
{
	bool a = true;
	// build an environment to create a local object x
	// trace the code line by line, using Step Into, to examine what happens
	// when x is declared and when it goes out of scope
	if (a == true) {
		// x exists only within this block
		AClass x(10, 100);
	}
	// same as above, for a dynamic object created by using new
	// x is a pointer to the object created
	// trace the code line by line, using Step Into, to examine what happens
	// when x is declared and when it is deleted
	AClass* x = new AClass(10, 100);
	//cout << x << endl;
	delete x;

	return 0;
}