#include <iostream>
#include "Graph.h"
#include <vector>
#include <queue>	// a class in the C++ STL
#include <stack>	// a class in the C++ STL
#include <set>		// a class in the C++ STL

using namespace std;
#define FILENAME_LEN 100



// test Graph class
int main1()
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

vector<int> bfs(Graph& graph, int start_vertex)
{
	// get the number of vertices of the graph
	int num_v = graph.get_num_v();

	// the variables (see lecture notes for more details of their uses)
	queue<int> queue;	// hold the vertices to visit
	bool* visited = new bool[num_v];	// note the visit status of each vertex
	vector<int> backtrack(num_v, -1);	// for backtrack

	// initialization
	for (int n = 0; n < num_v; n++)	// no vertex has been visited
		visited[n] = false;
	queue.push(start_vertex);		// push the start_vertex tino queue to be first visted
	visited[start_vertex] = true;	// mark it as having been visited

	// visit all vertices in queue
	while (!queue.empty()) {
		// take a source vertex from the queue 
		int source = queue.front();
		queue.pop();
		// for each destination vertex adjacent to source
		for (int dest = 0; dest < num_v; dest++) {
			// dest can't be ajacent to source as there is no edgee
			if (graph.get_edge(source, dest) == 0.) continue;

			if (visited[dest]) continue;	// skip dest vertex if it has been visited
			queue.push(dest);	// push dest vertex into queue to visit next
			visited[dest] = true;	// mark dest vertex as having been visited
			backtrack[dest] = source;	// record the parent of dest
		}
	}
	delete[] visited;

	return backtrack;
}


int main() {
	cout << "Provide graph definition file name: ";
	char* file_name = new char[FILENAME_LEN];
	cin >> file_name;

	// create the graph
	Graph graph(file_name);

	// breadth-first search over the graph with start vertex = 0
	vector<int> backtrack = bfs(graph, 0);

	// use a stack to backtrack the shortest path from vertex 0 to any vertex v
	int v;
	cout << "Specify the destination vertex: "; cin >> v;
	stack<int> path;
	while (backtrack[v] != -1) {
		path.push(v);
		v = backtrack[v];
	}
	cout << "The shortest path from 0 is:  ";
	while (!path.empty()) {
		cout << path.top() << " ";
		path.pop();
	}
	cout << endl;

	delete[] file_name;
	return 0;


}
