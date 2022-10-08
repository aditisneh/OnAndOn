#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left, *right;
};

Node* newNode(int data){
	Node* temp=new Node();
	BT->data=data;
	BT->left=BT->right=NULL;
	return BT;
}

Node* Tree(Node* BT, int data ){
    if(BT==NULL){
        return newNode(data);
    }

    if(data<BT->data){
        BT->left=Tree(BT->left, data);
    }
    else{
        BT->right=Tree(BT->right, data);
    }
    return BT;
}

void displayelements(struct Node* root){
    if(!root){
    return;
    }
    displayelements(root->left);
    cout<<root->data<<" ";
    displayelements(root->right);
}


void insertelement(struct Node* root , int value){
    queue<struct Node*> q;
    q.push(root);

    while(!q.empty()) {
        struct Node* root = q.front();
        q.pop();

        if(!root->left) {
            root->left = newNode(value);
            break;
        }
      else{
        q.push(root->left);
      }

      if(!root->right){
            root->right = newNode(value);
            break;
        } 
      else{
            q.push(root->right);
      }
    }
}

int main()
{
	char ch;
	int size;
  cout<<"Enter size of array : ";
	cin>>size;
  int arr[size];
	Node *root = new Node;
	root = NULL;
	cout<<"Enter elements in array : ";
	for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  for(int i = 0; i < size; i++){
	    root = Tree(root, arr[i]);
	}
  int n;
	cout<<"Enter Element to insert : ";
	cin>>n;
  insertelement(root,n);
  displayelements(root);
}
