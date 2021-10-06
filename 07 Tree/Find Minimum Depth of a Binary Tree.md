// C++ program to find minimum depth of a given Binary Tree
#include<bits/stdc++.h>
using namespace std;

// A BT Node
struct Node
{
	int data;
	struct Node* left, *right;
};

int minDepth(Node *root)
{
	// Corner case. Should never be hit unless the code is
	// called on root = NULL
	if (root == NULL)
		return 0;

	// Base case : Leaf Node. This accounts for height = 1.
	if (root->left == NULL && root->right == NULL)
	return 1;

	int l = INT_MAX, r = INT_MAX;
	// If left subtree is not NULL, recur for left subtree

	if (root->left)
	l = minDepth(root->left);

	// If right subtree is not NULL, recur for right subtree
	if (root->right)
	r = minDepth(root->right);

//height will be minimum of left and right height +1
	return min(l , r) + 1;
}

// Utility function to create new Node
Node *newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return (temp);
}

// Driver program
int main()
{
	// Let us construct the Tree shown in the above figure
	Node *root	 = newNode(1);
	root->left	 = newNode(2);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	cout <<"The minimum depth of binary tree is : "<< minDepth(root);
	return 0;
}
