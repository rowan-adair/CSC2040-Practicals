#include <iostream>
#include <ctime>
#include <time.h>
#include <algorithm>
#include <string>

using namespace std;

int* createRandomArray(int N) {
	srand(unsigned(time(NULL)));
	int* arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = rand() % 100;
	//cout << "The total value is " << N << endl;
	//cout << "The complexity of this loop structure is O(N)" << endl;
	return arr;
}

void selectionSort(int* a, int N) {
	int min;
	for (int i = 0; i < N - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < N; j++) {
			if (a[j] < a[min])
				min = j;
		}
		swap(a[min], a[i]);
	}
}

void bubbleSort(int* a, int N) {
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i -1; j++)
		{
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
		}
	}
}

void bubbleSortFlags(int* a, int N) {
	bool swapped{};
	for (int i = 0; i < N - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < N-i-1; j++)
		{
			if (a[j] > a[j + 1]) 
			{
				swap(a[j], a[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false) break;
	}
}

int main1() {
	int N = 100;
	int* array_1 = createRandomArray(N);
	int* array_2 = createRandomArray(N);
	int* array_3 = createRandomArray(N);
	int* array_4 = createRandomArray(N);






	return 0;
}