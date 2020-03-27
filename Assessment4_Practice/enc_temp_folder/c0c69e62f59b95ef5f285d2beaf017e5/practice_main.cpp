#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	srand((unsigned)time(NULL));

	vector<int> vec = {1,2,3,4};

	
	for (int i = 0; i < 4; i++)
	{
		cout << vec.at(i) << " " << endl;
	}


}