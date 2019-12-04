#include "CyclicQueue.h"
#include <iostream>

using namespace std;

CyclicQueue::CyclicQueue(int maxSize) : maxBufferSize(maxSize)
{
	buffer = new int[maxBufferSize];
	first = 0; 
	last = maxBufferSize - 1; 
	numItems = 0;
}

CyclicQueue::~CyclicQueue()
{
	delete[] buffer;
}

void CyclicQueue::addAtEnd(int i)
{
	if (numItems != maxBufferSize)
	{
		last = (last + 1) % maxBufferSize;
		buffer[last] = i;
		numItems++;
	}
}

int* CyclicQueue::removeFront()
{
	if (numItems > 0)
	{
		int* item = &buffer[first];
		first = (first + 1) % maxBufferSize;
		numItems--;
		return item;
	}
	return nullptr;
}

int* CyclicQueue::getAtFront()
{
	if (isEmpty()) cout << "Error queue empty." << endl;
	else {
		int* item = &buffer[last];
		return item;
	}
	
}

bool CyclicQueue::isEmpty()
{
	if (numItems == 0) return true;
	return false;
}

int CyclicQueue::size()
{
	return maxBufferSize;
}
