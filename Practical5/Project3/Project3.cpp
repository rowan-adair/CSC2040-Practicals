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

int main() {

	set<int> iset;
	iset.insert(5);
	iset.insert(9);
	iset.insert(1);
	iset.insert(8);
	iset.insert(3);
	cout << "iset contains:";
	printSet(iset);

	userSearchSet(iset);

	int newVal = 0;
	cout << "Enter a new integer value:";
	cin >> newVal;
	iset.insert(newVal);
	printSet(iset);

	return 0;
}

