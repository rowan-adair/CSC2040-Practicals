#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>


using namespace std;



int* createRandomArray(int N) {
	srand(unsigned(time(NULL)));
	int* arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = rand() % 100;
	cout << "The total value is " << N << endl;
	cout << "The complexity of this loop structure is O(N)" << endl;
	return arr;
}

int main1() {
	int M = 20;
	int* myArray = new int[M];
	myArray = createRandomArray(M);
	for (int i = 0; i < M; i++)
		cout << myArray[i] << endl;
	return 0;
}

int linearSearchDesc(int* a, int value, int N) {
	int c = 0;
	for (int i = 0; i < N; i++)
		if (a[i] == value) c++;
	return c;
}

int main2() {
	int sortedArray[] = { 101,100,95,84,81,81,63,54,51,42,37,37,32,29,28,19,13,11,8,5 };
	cout << "There have been " << linearSearchDesc(sortedArray, 37, 20) << " occurence's of 37" << endl;
	cout << "There have been " << linearSearchDesc(sortedArray, 81, 20) << " occurence's of 81" << endl;
}

void selectionSort(int* a, int N) {
	for (int i = 0; i < N - 1; i++)
	{
		int min = i;
		for (int j = 0; j < N; j++)
			if (a[j] < a[min])
				min = j;
		swap(a[min], a[i]);
	}
}

int main() {
	return 0;
}