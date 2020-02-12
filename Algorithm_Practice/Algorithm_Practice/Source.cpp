#include "SearchingAlgorithms.h"
#include "SortingAlgorithms.h"
#include "ArrayTools.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int* createRandomIntArray(int n, int upperbound) {
	srand((unsigned)time(NULL));
	int* array = new int[n]{};
	for (int i = 0; i < n; i++)
		array[i] = rand() % upperbound;
	return array;
}

void testBinarySearch() {
	// Bubble Sort
	cout << "Bubble Sort" << endl << endl;
	int *arr = createRandomIntArray(10,100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	bubbleSort(arr, 10);
	cout << "Bubble Sorted" << endl;
	printArray(arr, 10);
	cout << endl;
	
	// Selection Sort
	cout << "Selection Sort" << endl << endl;
	arr = createRandomIntArray(10, 100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	selectionSort(arr, 10);
	cout << "Selection Sorted" << endl;
	printArray(arr, 10);
	cout << endl;

	// Insertion Sort
	cout << "Insertion Sort" << endl << endl;
	arr = createRandomIntArray(10, 100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	insertionSort(arr, 10);
	cout << "Insertion Sorted" << endl;
	printArray(arr, 10);
	cout << endl;

	// Quick Sort
	cout << "Quick Sort" << endl << endl;
	arr = createRandomIntArray(10, 100);
	cout << "Un-sorted" << endl;
	printArray(arr, 10);
	quickSort(arr, 0, 9);
	cout << "Quick Sorted" << endl;
	printArray(arr, 10);
	cout << endl;

}


int main() {
	testBinarySearch();
} 