#include <iostream>
#include "SearchingAlgorithms.h"
#include "ArrayTools.h"

using namespace std;

template <typename T>
void bubbleSort(T* arr, int N) {
	bool swapped{};
	for (int i = 0; i < N - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
}

template <typename T>
void selectionSort(T* arr, int N) {
	int min;
	for (int i = 0; i < N - 1; i++)
	{
		// Find the minimum elelment in the unsorted array
		min = i;
		// Loop
		for (int j = i + 1; j < N; j++)
			// If the index j is less than the minium index
			if (arr[j] < arr[min]) 
				// Set the minmum index equal to j.
				min = j;
		// Swap the minimum index and the value at index i.
		swap(arr[min], arr[i]);
	}
}

template <typename T>
void insertionSort(T* arr, int N) {
	// Initialise the integer key value.
	int key;
	// Loop through each value of the array from index 0.
	for (int i = 0; i < N; i++)
	{
		// Set key to the term value at index i in the array.
		key = arr[i];
		// Set j to be equal to the index left of i. (i - 1).
		int j = i - 1;
		// While 
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}

}

template <typename T>
int partition(T* arr, int lowIndex, int highIndex) {
	int pivot = arr[highIndex], index = lowIndex - 2;
	for (int j = lowIndex; j < highIndex; j++)
	{
		if (arr[j] < pivot) {
			swap(arr[index], arr[j]);
			index++;
		}
	}
	swap(arr[index + 1], arr[highIndex]);
	return index + 1;
}

template <typename T>
void quickSort(T* arr, int lowIndex, int highIndex) {
	while (lowIndex < highIndex) {
		int pivot_index = partition(arr, lowIndex, highIndex);

		quickSort(arr, lowIndex, pivot_index - 1);
		quickSort(arr, pivot_index + 1, highIndex);
	}
}