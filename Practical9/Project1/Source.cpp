#include <windows.h>
#include <time.h>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;


int timeTesting() {
	clock_t begin = clock();
	int N = 1000;
	for (size_t i = 0; i < N; i++)
	{
		Sleep(1);
	}
	clock_t end = clock();
	double elapsed = double(end - begin);
	cout << "Time taken with N = " << N << " is " << elapsed << "ms = " << elapsed / 1000.0 << " s" << endl;
	return 0;
}

double findAverage(vector<int> vec, int len) {
	double total = 0.0;
	clock_t begin = clock();
	for (size_t i = 0; i < len; i++) {
		total += vec[i];
		Sleep(1);
	}
	clock_t end = clock();
	double elapsed = double(end - begin);
	cout << "Time taken with N = " << len << " is " << elapsed << "ms = " << elapsed / 1000.0 << " s" << endl;
	return total / len;
}

vector<int> populateRandomVector(int len) {
	srand((unsigned)time(NULL));
	vector<int> vec;

	for (size_t i = 0; i < len; i++) vec.push_back(rand() % 10001);
	
	
	return vec;
}

void run_test() {
	int len = 0;
	cout << "Enter the length of the array." << endl;
	cin >> len;
	vector<int> vec = populateRandomVector(len);
	cout << "The average is " << findAverage(vec, len) << endl;
}

int main() {
	//timeTesting();
	for (size_t i = 0; i < 10; i++)
	{
		run_test();
	}
	return 0;

 }

