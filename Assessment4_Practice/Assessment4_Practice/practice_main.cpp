#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

double func(int N) {

}

int main() {

}

int maina() {

	srand((unsigned)time(NULL));

	vector<int> vec;

	for (int i = 0; i < 20; i++) vec.push_back(rand() % 100);
	
	for (int i = 0;  i < 20; i++) cout << vec[i] << " ";
	cout << endl;

	sort(vec.begin(), vec.end());

	for (int i = 0; i < 20; i++) cout << vec[i] << " ";
	cout << endl;

	return 0;
}