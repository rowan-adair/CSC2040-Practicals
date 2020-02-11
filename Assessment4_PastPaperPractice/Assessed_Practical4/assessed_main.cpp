#include <iostream>
#include <ctime>
#include <windows.h>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int* createRandomArray(int N) {
	srand(unsigned(time(NULL)));
	int* arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = rand() % 100;
	//cout << "The total value is " << N << endl;
	//cout << "The complexity of this loop structure is O(N)" << endl;
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
	return 0;
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

void printArray(int *a, int N) {
	for (int i = 0; i < N; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main3() {
	cout << "Array size example.N = ";
	int N = 0;
	cin >> N;
	if (N <= 0) return 1;
	
	int* array = new int[N];
	
	array = createRandomArray(N);
	printArray(array, N);
	
	selectionSort(array, N);
	printArray(array, N);

	return 0;
}

int main4() {
	cout << "\nTiming selection sort.\n" << endl;
	for (int i = 500; i <= 3000; i += 500)
	{
		int* a = createRandomArray(i);
		clock_t begin = clock();
		selectionSort(a, i);
		clock_t end = clock();
		double elapsed = double(end - begin);
		cout << "Time taken (N is " << i << ") = " << elapsed << " ms" << " = " << elapsed / 1000 << " s." << endl;
	}

	cout 
		<< "\nThe complexity of selection sort is O(n^2). The reason" 
		<< "\nfor this is that there is an outer loop structure"
		<< "\nbased upon an inner loop structure."
		<<
	endl;

	return 0;
}

double func(int N) {
	double total = 0;
	for (int i = 0; i < N; i++)
		total += double(i) * N;
	cout << "The total is " << total << endl;
	cout << "The complexity of the loop structure is O(N)" << endl;
	return total;
}

int main1b() {
	int M = 100;
	for (int N = 0; N < M; N++)
		cout << func(N) << endl;
	return 0;
}

int linearSearch_r(int* a, int value, int N) {
	int i,pos = -1;
	for (i = 0; i < N; i++)
		if (a[i] == value) pos = i;
	return pos;
}

void checkOccurence(int ind, int val) {
	if (ind == -1) cout << "There were no occurences of " << val << " in the array.";
	else cout << "There was an occurence of " << val << " at index " << ind;
	cout << endl;
}

int main2b() {

	int sortedArray[] = { 14,15,20,21,24,25,30,31,34,35,40,41,44,45,50,51,64,65,70,72,74,75,70,84,90,91,94,95,100,101 };
	checkOccurence(linearSearch_r(sortedArray, -1, 30), -1);
	checkOccurence(linearSearch_r(sortedArray, 84, 30), 84);

	return 0;
}

void bubbleSortNoFlag(int* a, int N) {
	for (int i = 0; i < N - 1; i++)
		for (int j = 0; j < N - i -1; j++)
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
}

void bubbleSort(int* a, int N) {
	bool swapped{};
	for (int i = 0; i < N - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < N - i - 1; j++)
		{
			if (a[j] > a[j + 1]) 
			{
				swap(a[j], a[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
}



int main3b() {
	cout << "Array size example N = ";
	int N = 0;
	cin >> N;
	if (N <= 0) return 1;

	int* array = new int[N];
	srand((unsigned)time(NULL));

	for (int i = 0; i < N; i++) array[i] = rand() % 10000;
	printArray(array, N);
	bubbleSort(array, N);
	printArray(array, N);
}


int main4b() {
	for (int i = 5000; i <= 30000; i+=5000){
		// Iniialise random array
		int* a = createRandomArray(i);
		// Start timer
		clock_t begin = clock();
		bubbleSort(a, i);
		// End timer
		clock_t end = clock();
		// Calculate time
		double time = double(end - begin);
		cout << "The time taken (N is " << i << ") = " << time << " ms = " << time / 1000 << " s." << endl;
	}
	return 0;
}

int binarySearch(vector<int>& v, int first, int last, int value)
{
	if (first > last) return -1;
	int mid = (first + last) / 2;
	if (v[mid] == value) return mid;
	else if (value < v[mid]) return binarySearch(v, first, mid - 1, value);
	else return binarySearch(v, mid + 1, last, value);
}

int main() {
	cout << "Data size examples. N = ";
	int N;
	cin >> N;
	vector<int> array;
	srand((unsigned)time(NULL));
	for (int i = 0; i < N; i++) array.push_back(rand() % 100000);
	cout << binarySearch(array, 0, N, array[N -1]) << endl;
}