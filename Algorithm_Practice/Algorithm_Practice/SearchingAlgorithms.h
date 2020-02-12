#ifndef SEARCHING_ALGORITHMS_H
#define SEARCHING_ALGORITHMS_H

#include <vector>

// Recursive Binary Search Returning Middle Index of Value
template <typename T>
int binarySearchRecursiveMiddleIndex(T* arr, int startIndex, int endIndex, T value) {
	// If the start index is greater than the end index then the value has not been found.
	if (startIndex > endIndex) return -1;
	// Initialise Middle Index.
	int midIndex = startIndex + ((endIndex - startIndex) / 2);
	// If the middle index is equal to the value, reutrn the middle index.
	if (arr[midIndex] == value) 
		return midIndex;
	// If the value at the middle index is greater than the value being searched for
	// then the value being searched for must be in the sub-array left of the mid index. 
	if (arr[midIndex] > value)
		return binarySearchRecursiveMiddleIndex(arr, startIndex, midIndex - 1, value);
	// Else, the value at the middle index is less than the value being searched for, 
	// thus the value being searched for must be in the sub-array right of the mid index.
	return binarySearchRecursiveMiddleIndex(arr, midIndex + 1, endIndex, value);
}

// Recursive Binary Search Returning First Index of Value
template <typename T>
int binarySearchRecursiveFirstIndex(T* arr, int startIndex, int endIndex, T value) {
	// Perform recursively while the start index is greater than and not equal to
	// the end index.
	while (startIndex < endIndex) {
		// Initialise Middle Index. 
		int midIndex = startIndex + ((endIndex - startIndex) / 2);
		// If the array at the middle index is greater than or equal to the value
		// being searched for then the value must be contained within the sub-array
		// left of the middle index.
		if (arr[midIndex] >= value)
			return binarySearchRecursiveIndex(arr, startIndex, midIndex, value);
		// Conversely, if the middle index is less than and not equal to the 
		// value. Therefore the value must be contained within the sub-array of
		// right of the middle index.
		else 
			return binarySearchRecursiveIndex(arr, midIndex + 1, endIndex, value);
	}
	// If the end index is smaller than the start index, check the start index.
	// If the value is at the start index, return the start index. Other wise
	// the function will eventually set the start index to the end index. 
	// If the value is not found return -1.
	return arr[startIndex] == value ? startIndex : -1;
}

template <typename T>
int linearSearchIndex(T* arr, int Value, int N) {
	for (int i = 0; i < N; i++)
		if (arr[i] == value) return i;
	return -1;
}

template <typename T>
int linearSearchCount(T* arr, int Value, int N) {
	int count = 0;
	for (int i = 0; i < N; i++)
		if (arr[i] == value) count++;
	return count;
}

#endif // !SEARCHING_ALGORITHMS_H
