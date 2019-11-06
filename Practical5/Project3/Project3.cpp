#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void printSet(set<int> iset) {
	set<int>::iterator it;
	for (it = iset.begin(); it != iset.end(); it++)
	{
		cout << " " << *it;
	}
	cout << endl;
}
void userSearchSet(set<int> iset) {
	int searchFor;
	cout << "Enter a number to search for :";
	cin >> searchFor;

	if (binary_search(iset.begin(), iset.end(), searchFor)) {
		cout << "Found " << searchFor << endl;
	}
	else {
		cout << "Did not find " << searchFor << endl;
	}
}

set<int> userInsert(set<int> iset) {
	int newVal = 0;
	cout << "Enter a new integer value:";
	cin >> newVal;
	iset.insert(newVal);
	cout << "New set : " << printSet(iset);
	return iset;
}

int main() {

	set<int> iset;
	for (size_t i = 1; i <= 10; i++)
	{
		iset.insert(i);
	}
	cout << "iset contains:";
	printSet(iset);

	// User search for value.
	userSearchSet(iset);

	// User inserts value
	iset = userInsert(iset);
	printSet(iset);

	return 0;
}

