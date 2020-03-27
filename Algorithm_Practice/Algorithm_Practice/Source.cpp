#include "SearchingAlgorithms.h"
#include "SortingAlgorithms.h"
#include "ArrayTools.h"
#include <iostream>
#include <vector>

using namespace std;

int* createRandomIntArray(int n, int upperbound) {
	srand((unsigned)time(NULL));
	int* array = new int[n]{};
	for (int i = 0; i < n; i++)
		array[i] = rand() % upperbound;
	return array;
}

void testSortingAlgorithms() {
	clock_t begin, end;
	// Bubble Sort
	cout << "Bubble Sort" << endl << endl;
	int *arr = createRandomIntArray(10,100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	begin = clock();
	bubbleSort(arr, 10);
	end = clock();
	double time_bubble = end - begin;
	cout << "Bubble Sorted" << endl;
	printArray(arr, 10);
	cout << endl;
	
	// Selection Sort
	cout << "Selection Sort" << endl << endl;
	arr = createRandomIntArray(10, 100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	begin = clock();
	selectionSort(arr, 10);
	end = clock();
	double time_selection = end - begin;
	cout << "Selection Sorted" << endl;
	printArray(arr, 10);
	cout << endl;

	// Insertion Sort
	cout << "Insertion Sort" << endl << endl;
	arr = createRandomIntArray(10, 100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	begin = clock();
	insertionSort(arr, 10);
	end = clock();
	double time_insertion = end - begin;
	cout << "Insertion Sorted" << endl;
	printArray(arr, 10);
	cout << endl;

	// Quick Sort
	cout << "Quick Sort" << endl << endl;
	arr = createRandomIntArray(10, 100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	begin = clock();
	quickSort(arr, 0, 9);
	end = clock();
	double time_quick = end - begin;
	cout << "Quick Sorted" << endl;
	printArray(arr, 10);
	cout << endl;

	cout << "Bubble Sort : " << time_bubble / 1000 << "/s" << endl;
	cout << "Selection Sort : " << time_selection / 1000 << "/s" << endl;
	cout << "Insertion Sort : " << time_insertion / 1000 << "/s" << endl;
	cout << "Quick Sort : " << time_quick / 1000 << "/s" << endl;


}


int main() {
	testSortingAlgorithms();
} 