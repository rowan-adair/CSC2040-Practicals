#include "SearchingAlgorithms.h"
#include "SortingAlgorithms.h"

#include <iostream>

using namespace std;


void testBinarySearch() {

	int testSearchArray[] = { 2,2,3,4,4,4,4,6,7,8,9,10,11,12,12,13,13,13,14,14 };
	int* a = testSearchArray;
	cout << "Recursive Binary Search for 13 Returning First Index, Index is :  " << binarySearchRecursiveIndex(a, 0, 20, 13) << endl;
	cout << "Iterative Binary Search for 14 Returning First Index, Index is :  " << binarySearchIterativeIndex(a, 0, 20, 14) << endl;

	cout << "Recursive Binary Search for 4 Returning The Total Count, Count is :  " << binarySearchRecursiveCount(a, 0, 20, 4) << endl;
	cout << "Iterative Binary Search for 2 Returning The Total Count, Count is :  " << binarySearchIterativeCount(a, 0, 20, 2) << endl;

	

}


int main() {
	testBinarySearch();
}