#include <iostream>
#include <vector>

using namespace std;

const int N = 30;

class Graph {
	// variable declaration


public:
	// constructor
	Graph(int, int);

	// define public accessible methods
	int   V(Graph);
	int   E(Graph);
	bool  adjacent(Graph, int,int);
	int   neighbors(Graph, int);
	bool  add(Graph,int,int);
	bool  del(Graph, int,int);
	int   get_vertice_node_value(Graph,int,int);
	bool  set_vertice_node_value(Graph,int,int);
	int   get_edge_value(Graph,int,int);
	bool  set_edge_value(Graph,int,int,int);

private:
	int vertices_num;
	int edges_num;
	vector<int> node(int);
};

Graph::Graph(int V, int E) {
	V = 0;
	E = 0;
}

int Graph::V (Graph G) {
	return G.vertices_num;
}

int Graph::E (Graph G) {
	return G.edges_num;
}

// using vector to store vertices and edges information
bool Graph::adjacent(Graph, int x,int y) {

}

int get_vertice_node_value (Graph G, int vertice_index) {
	if (vertice_index < 0 || vertice_index > G.node.size()) 
		return false;
	return G.node[vertice_index];
}

int set_vertice_node_value (Graph G, int vertice_index, int node_val) {
	if (vertice_index < 0 || vertice_index > G.node.size())
		return false;
	
	G.node[vertice_index] = node_val;
	return true; 
}