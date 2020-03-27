#include "SearchingAlgorithms.h"
#include "SortingAlgorithms.h"

#include <iostream>

using namespace std;


void testBinarySearch() {

	int testSearchArray[] = { 2,2,3,4,4,4,6,7,8,9,10,11,13,13,13,14,14,14,14,14};
	int* a = testSearchArray;
	// Returns 12
	cout << "Recursive Binary Search for 13 Returning First Index, Index is :  " << binarySearchRecursiveIndex(a, 0, 19, 13) << endl;
	// Returns 15
	cout << "Iterative Binary Search for 14 Returning First Index, Index is :  " << binarySearchIterativeIndex(a, 0, 19, 14) << endl;

	// Returns 3
	cout << "Recursive Binary Search for 4 Returning The Total Count, Count is :  " << binarySearchRecursiveCount(a, 0, 19, 13) << endl;
	// Returns 5
	cout << "Iterative Binary Search for 4 Returning The Total Count, Count is :  " << binarySearchIterativeCount(a, 0, 19, 14) << endl;

	

}


int main() {
	testBinarySearch();
}