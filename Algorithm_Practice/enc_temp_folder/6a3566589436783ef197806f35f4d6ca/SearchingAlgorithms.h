#ifndef SEARCHING_ALGORITHMS_H
#define SEARCHING_ALGORITHMS_H
// Recursive Binary Search Returning Index of Values
template <typename T>
int binarySearchRecursiveIndex(T* a, int lowIndex, int highIndex, int value) {
	if (lowIndex <= highIndex) {
		int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
		// If the element is present in the middle, return the index.
		if (a[middleIndex] == value)
			return middleIndex;
		// Search the left sub-array.
		if (a[middleIndex] > value)
			return binarySearchRecursiveIndex(a, lowIndex, middleIndex - 1, value);
		// Search the right sub-array.
		return binarySearchRecursiveIndex(a, middleIndex + 1, highIndex, value);
	}
	// We reach here when element is not present in the array (-1 impossible index).
	return -1;
}
// Recursive Binary Search Returning Count of Values
template <typename T>
int binarySearchRecursiveCount(T* a, int lowIndex, int highIndex, int value) {
	int count = 0;
	if (lowIndex <= highIndex) {
		int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
		// If the element is present in the middle, return the index.
		if (a[middleIndex] == value) 
			count++;
		// Search the left sub-array.
	if (a[middleIndex] > value) 
			count += binarySearchRecursiveCount(a, lowIndex, middleIndex - 1, value);
		// Search the right sub-array. 
		count += binarySearchRecursiveCount(a, middleIndex + 1, highIndex, value);
	}
	// We reach here when element is not present in the array (-1 impossible index).
	return count;
}
// Iterative Binary Search Returning Index of Values
template <typename T>
int binarySearchIterativeIndex(T* a, int lowIndex, int highIndex, int value) {
	while (lowIndex <= highIndex) {
		int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
		if (a[middleIndex] == value) 
			return middleIndex;
		if (a[middleIndex] < value) 
			lowIndex = middleIndex + 1;
		else
			highIndex = middleIndex - 1;
	}
	return -1;
}
// Iterative Binary Search Returning Count of Values
template <typename T>
int binarySearchIterativeCount(T* a, int lowIndex, int highIndex, int value) {
	int count = 0;
	while (lowIndex <= highIndex) {
		int middleIndex = lowIndex + (highIndex - lowIndex) / 2;
		if (a[middleIndex] == value)
			count++;
		if (a[middleIndex] < value)
			lowIndex = middleIndex + 1;
		else
			highIndex = middleIndex - 1;
	}
	return count;
}
#endif // !SEARCHING_ALGORITHMS_H
