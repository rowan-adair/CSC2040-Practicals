#include "Graph.h"
#include <iostream>
#include <fstream>
#include <algorithm>	// part of C++ STL
using namespace std;

Graph::Graph(char* fname)
{
	edges = 0; // same as edges = NULL;

	// open the graph definition file for input 
	ifstream fin(fname);
	if (!fin) {
		cout << "Can't open file : " << fname << endl;
		return;
	}

	// read number of vertices from the file
	fin >> num_v;
	// read direction
	char c;
	fin >> c;
	

	if (c == 'd')
		directed = true;
	else if (c == 'u')
		directed = false;

	edges = new double* [num_v];

	for (int i = 0; i < num_v; i++)
	{
		int num_values = 0;
		directed ? num_values = num_v : num_values = i + 1;
		for (int j = 0; j < num_values; j++)
			edges[i][j] = 0.0;
	}


	
	double weight;


}

Graph::~Graph()
{
	if (edges) delete[] edges;
}



