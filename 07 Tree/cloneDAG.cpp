/ C++ program to clon a directed acyclic graph.
#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
		int key;
		vector<Node *> adj;
		

		Node(int key)
		{
			this->key = key;
		}
};

void printGraph(Node *startNode,
				vector<bool> &visited)
{
	

	if (!startNode->adj.empty())
	{
		
	
		for(auto i : startNode->adj)
		{
			if (!visited[startNode->key])
			{
				cout << "edge " << startNode
					<< "-" << i
					<< ":" << startNode->key
					<< "-" << i->key
					<< endl;
				if (!visited[i->key])
				{
					printGraph(i, visited);
					visited[i->key] = true;
				}
			}
		}
	}
}


Node *cloneGraph(Node *oldSource,
				Node *newSource,
				vector<bool> &visited)
{
	Node *clone = NULL;
	
	if (!visited[oldSource->key] &&
		!oldSource->adj.empty())
	{
		for(auto old : oldSource->adj)
		{
			
			// Below check is for backtracking, so new
			// nodes don't get initialized everytime
			if (clone == NULL ||
			(clone != NULL &&
			clone->key != old->key))
				clone = new Node(old->key);
				
			newSource->adj.push_back(clone);
			cloneGraph(old, clone, visited);
		
			visited[old->key] = true;
		}
	}
	return newSource;
}


int main()
{
	Node *n0 = new Node(0);
	Node *n1 = new Node(1);
	Node *n2 = new Node(2);
	Node *n3 = new Node(3);
	Node *n4 = new Node(4);
	
	n0->adj.push_back(n1);
	n0->adj.push_back(n2);
	n1->adj.push_back(n2);
	n1->adj.push_back(n3);
	n1->adj.push_back(n4);
	n2->adj.push_back(n3);
	n3->adj.push_back(n4);

	vector<bool> visited(5, false);
	cout << "Graph Before Cloning:-\n";
	printGraph(n0, visited);
	visited = { false, false, false, false, false };
	
	cout << "\nGraph Before Starts:-\n";
	Node *clonedGraphHead = cloneGraph(
		n0, new Node(n0->key), visited);
	cout << "Cloning Process Completes.\n";
	
	visited = { false, false, false, false, false };
	cout << "\nGraph After Cloning:-\n";
	printGraph(clonedGraphHead, visited);
	
	return 0;
}

