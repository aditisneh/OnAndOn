// Programme to find minimum depth of a given Binary Tree
#include<bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	struct Node* left, *right;
};

int minDepth(Node *root)
{

	if (root == NULL)
		return 0;

	if (root->left == NULL && root->right == NULL)
	return 1;

	int l = INT_MAX, r = INT_MAX;


	if (root->left)
	l = minDepth(root->left);

	if (root->right)
	r = minDepth(root->right);

	return min(l , r) + 1;
}

Node *newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return (temp);
}


int main()
{
	Node *root	 = newNode(1);
	root->left	 = newNode(2);
	root->right	 = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	cout <<"The minimum depth of binary tree is : "<< minDepth(root);
	return 0;
}
