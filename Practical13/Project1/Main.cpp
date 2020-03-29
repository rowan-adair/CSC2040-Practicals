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


int main2() {
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

void dijkstra(Graph& graph, int start_vertex,int num_vertexes, int* backtrack, double* distances) {
		
	set<int> vertexes;

	for (int i = 0; i < num_vertexes; i++) 
	{
		if (i != start_vertex)
			vertexes.insert(i);
		distances[i] = DBL_MAX;
	}

	distances[start_vertex] = 0.0;

	for (set<int>::iterator itr = vertexes.begin(); itr != vertexes.end(); itr++)
	{
		int destination_vertex = *itr;

		double weight = graph.get_edge(start_vertex, destination_vertex);

		if (weight > 0.0) distances[destination_vertex] = weight;
		
		backtrack[destination_vertex] = start_vertex;
		
	}
	while (!vertexes.empty())
	{
		// find the vertex u in vertexes with the smallest distance[u]
		// Min infinity
		double min_distance = DBL_MAX;
		int source = -1;

		for (set<int>::iterator itr = vertexes.begin(); itr != vertexes.end(); itr++)
		{
			int destination = *itr;
			// If the destination destance is less than the minimum distance 
			// Set the minimum distance to be 
			if (distances[destination] < min_distance) {
				min_distance = distances[destination];
				source = destination;
			}
		}

		if (source < 0) break;

		vertexes.erase(source);

		// All vertexes adjacent to source vertex.
		for (set<int>::iterator itr = vertexes.begin(); itr != vertexes.end(); itr++)
		{
			int destination = *itr;
			if (graph.get_edge(source, destination) != 0.0)
			{
				double distance = distances[source] + graph.get_edge(source, destination);
				if (distance < distances[destination])
				{
					distances[destination] = distance;
					backtrack[destination] = source;
				}
			}
		}
	}
}

int main() {
	cout << "Provide graph definition file name: ";
	char* file_name = new char[FILENAME_LEN];
	cin >> file_name;
	cout << endl;
	
	Graph graph(file_name);

	int num_vertexes = graph.get_num_v();
	int* backtrack = new int[num_vertexes];
	
	double* distances = new double[num_vertexes];


	char yesno;
	do {

		int source;
		cout << "Specify the source vertex: "; cin >> source;

		dijkstra(graph, source, num_vertexes, backtrack, distances);

		int destination;
		cout << "Specify destination vertex: "; cin >> destination;
		if (distances[destination] == DBL_MAX || distances[destination] == -DBL_MAX)
			cout << "There is no path between source and destinaiton " << endl;
		else
			cout << "The shortest path from source to destination is: " << distances[destination] << endl;
		cout << endl;
		
		cout << "Try another pair (y/n)? "; cin >> yesno;
		cout << endl;
	} while (yesno == 'y');

	cout << endl;
	
	delete[] distances;
	delete[] backtrack;
	delete[] file_name;
}