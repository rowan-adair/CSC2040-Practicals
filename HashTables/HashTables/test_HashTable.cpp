#include <iostream>
#include <time.h>
#include "PhoneDir.h"
#include "HashTable.h"
#include <string>
#include <vector>

using std::vector;
using std::string;

using namespace std;

int main()
{
	// store phone records in hash table with size 11
	HashTable<PhoneDir> HTable(7);
	vector<PhoneDir> entries = {
		PhoneDir("Tom", 123456),
		PhoneDir("Sam", 346834),
		PhoneDir("Pete", 347980),
		PhoneDir("Jack", 328709),
		PhoneDir("David", 335566),
		PhoneDir("Rowan", 123456)
	};

	for (int i = 0; i < entries.size(); i++) HTable.insert(entries.at(i));
	
	// search using name for phone number over the hash table
	char yn = 'y';
	do {
		cout << "Whose phone number are you looking for? ";
		string name; cin >> name;

		// form enquiry - unknown phone number set to the default -1
		PhoneDir enquiry(name);	
		
		// search to retrieve the phone number if found
		clock_t begin = clock();
		size_t index = HTable.find(enquiry);
		clock_t end = clock();
		double elapsed = double(end - begin);
		// output
		cout << "index = " << index << endl;
		cout << "name = " << enquiry.get_key() << endl;
		cout << "number = " << enquiry.get_value() << endl;
		cout << "time taken = " << elapsed << " ms" << endl << endl;
		cout << "Another (y/n)? "; cin >> yn;
	} while (yn == 'y');

	return 0;
}
