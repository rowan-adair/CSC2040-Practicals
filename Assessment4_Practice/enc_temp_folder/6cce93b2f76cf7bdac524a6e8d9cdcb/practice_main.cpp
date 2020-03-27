#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	srand((unsigned)time(NULL));

	vector<int> vec{};

	for (int i = 0; i < 20; i++)
		vec.at(i) = rand() % 100;

	for (int i = 0; i < 20; i++)
	{
		cout << vec.at(i) << " " << endl;
	}


}