#include <iostream>
#include <ctime>
#include <time.h>
#include <windows.h>


using namespace std;


void printArray(int* a, int N) {
	for (int i = 0; i < N; i++) cout << " " << a[i];
}

void insertionSort(int* a, int N) {
	
	int check, j;

	clock_t begin = clock();

	for (size_t i = 0; i < N; i++)
	{
		Sleep(1);
		check = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > check)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = check;
	}
	clock_t end = clock();
	double elapsed = double(end - begin);
	cout << "Time taken with N = " << N << " is " << elapsed << "ms = " << elapsed / 1000.0 << " s" << endl;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */

int partition(int *a, int first, int last) {
	int pivot = a[last];
	int leftwall = first - 1;
	for (int i = first; i < last; i++)
	{

		if (a[i] < pivot) {
			leftwall++;
			swap(a[leftwall], a[i]);
		}

	}
	swap(a[leftwall + 1], a[last]);
	return (leftwall + 1);
}


/* The main function that implements QuickSort
a --> Array to be sorted,
first--> Starting index,
last --> Ending index */
void quickSort(int *a, int first, int last) {
	//clock_t begin = clock();
	if (first < last) {
		int partitioning_index = partition(a, first, last);
		quickSort(a, first, partitioning_index - 1);
		quickSort(a, partitioning_index + 1, last);
	}
	/*clock_t end = clock();
	double elapsed = double(end - begin);
	cout << "Time taken with N = " << last << " is " << elapsed << "ms = " << elapsed / 1000.0 << " s" << endl;*/
}


bool isSorted(int* a, int N) {
	for (size_t i = 1; i < N; i++)
	{
		if (a[i - 1] > a[i]) return false;
	}
	return true;
}

int main() {

	

	int arr_unsorted[4] = { 3,2,1,4 };
	insertionSort(arr_unsorted, 4);
	//quickSort(arr_unsorted, 0, 3);

	printArray(arr_unsorted, 4);
	cout << endl;
	if (isSorted(arr_unsorted, 4))
		cout << "Sorted" << endl;
	else
		cout << "Unsorted" << endl;
}