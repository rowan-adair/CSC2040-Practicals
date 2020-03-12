#include <iostream>
#include "Graph.h"
#include <vector>
#include <queue>	// a class in the C++ STL
#include <stack>	// a class in the C++ STL
#include <set>		// a class in the C++ STL

using namespace std;
#define FILENAME_LEN 100

// test Graph class
int main()
{
	cout << "Provide a graph definition file name: ";
	char* file_name = new char[FILENAME_LEN];
	cin >> file_name;

	Graph graph(file_name);

	char yesno;
	do {
		cout << "Test if there is an edge between two vertices" << endl;
		int source, dest;
		cout << "Specify Source : ";
		cin >> source;
		cout << "Specify Destination : ";
		cin >> dest;
		cout << endl;

		if (graph.get_edge(source,dest) == 0.0) cout << "No edge" << endl;
		else cout << source << " "
			<< dest << " "
			<< graph.get_edge(source, dest) << endl;
		cout << "Try another pair (y/n)? ";
		cin >> yesno;
	} while (yesno == 'y');

	delete[] file_name;
	return 0;
}