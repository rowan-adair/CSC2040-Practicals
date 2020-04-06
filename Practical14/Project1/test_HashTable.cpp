#include <iostream>
#include <time.h>
#include "PhoneDir.h"
#include "HashTable.h"

using namespace std;

void search(HashTable<PhoneDir> HTable) {
	char yn = 'y';
	do {
		cout << "Whose number are you looking for? ";
		string name; cin >> name;

		// form enquiry - unknown phone number set to the default -1
		PhoneDir enquiry(name);

		// search to retrieve the phone number if found
		clock_t begin = clock();
		size_t index = HTable.find(enquiry);
		clock_t end = clock();
		double elapsed = double(end - begin);

		// output
		cout << "table size = " << HTable.tableSize() << endl;
		cout << "index = " << index << endl;
		cout << "name = " << enquiry.get_key() << endl;
		cout << "number = " << enquiry.get_value() << endl;
		cout << "time taken = " << elapsed << " ms" << endl << endl;

		cout << "Another (y/n)? "; cin >> yn;
	} while (yn == 'y');
}

void add_number(HashTable<PhoneDir>& HTable) {
	char yn = 'y';
	do {

		int size = HTable.tableSize() + 1;

		HTable.reHash(size);

		cout << "What is the name of the Contact? ";
		string name; cin >> name;
		cout << "What is the number of the Contact?";
		int num; cin >> num;

		HTable.insert(*new PhoneDir(name, num));
		cout << "Another (y/n)? "; cin >> yn;
	} while (yn == 'y');
}


int main()
{
	// store phone records in hash table with size 5
	HashTable<PhoneDir> HTable(5);
	HTable.insert(*new PhoneDir("Tom", 123456));
	HTable.insert(*new PhoneDir("John", 346834));
	HTable.insert(*new PhoneDir("Jack", 347980));
	HTable.insert(*new PhoneDir("Clare", 328709));
	HTable.insert(*new PhoneDir("Razel", 335566));
	
	bool active = true;

	do {
		int input = 0;
		cout << "What would you like to do?\n"
			<< "1. Search by Name.\n"
			<< "2. View Numbers\n"
			<< "3. Add Number\n" 
			<< "0. Exit"<< endl;
		cin >> input;
		switch (input)
		{
		case 1:
			search(HTable);
			break;
		case 2:

		case 3:
			add_number(HTable);
			break;
		case 0:
			active = false;
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
		}
		
	} while (active);

	exit(0);
	return 0;
}