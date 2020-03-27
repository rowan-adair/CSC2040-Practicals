#ifndef SEARCHING_ALGORITHMS_H
#define SEARCHING_ALGORITHMS_H
// Recursive Binary Search Returning Index of Values
template <typename T>
int binarySearchRecursiveIndex(T* arr, int lowIndex, int highIndex, int value) {
	// We reach here when element is not present in the array (-1 impossible index).

	//if (lowIndex > highIndex) return -1;

	int middleIndex = lowIndex + ((highIndex - lowIndex) / 2);
	int result_index = -1;
	// If the element is present in the middle, return the index.
	if (arr[middleIndex] == value)
		result_index = middleIndex;
	// Search the left sub-array.
	if (arr[middleIndex] >= value)
		result_index = binarySearchRecursiveIndex(arr, lowIndex, middleIndex  - 1, value);
	// Search the right sub-array.
	else if (arr[middleIndex] <= value)
		result_index = binarySearchRecursiveIndex(arr, middleIndex + 1, highIndex, value);
	return result_index;
}
// Recursive Binary Search Returning Count of Values
template <typename T>
int binarySearchRecursiveCount(T* a, int lowIndex, int highIndex, int value) {
	int count = 0;
	if (lowIndex <= highIndex) {
		int middleIndex = lowIndex + ((highIndex - lowIndex) / 2);
		// If the element is present in the middle, return the index.
		if (a[middleIndex] == value) 
			count++;
		// Search the left sub-array.
		else if (a[middleIndex] > value) 
			count += binarySearchRecursiveCount(a, lowIndex, middleIndex - 1, value);
		// Search the right sub-array. 
		else 
			count += binarySearchRecursiveCount(a, middleIndex + 1, highIndex, value);
	}
	// We reach here when element is not present in the array (-1 impossible index).
	return count;
}

#endif // !SEARCHING_ALGORITHMS_H
