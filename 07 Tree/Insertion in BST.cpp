#include <bits/stdc++.h>
using namespace std;
class Tree {
    public:
        int data;
        Tree* left = NULL,*right = NULL;
        
        // Constructor initialised
        Tree(int x) {
            data = x;
            left = NULL;
            right = NULL;
        }
};
void inorder_traversal (Tree *root) {
    if (root == NULL) return;
      // Visit Left subtree
      inorder_traversal(root -> left);
    
      // Print the data
      cout << root -> data << ” “;
    
      // Visit right subtree
      inorder_traversal(root -> right);
  
}
Tree * insert_node(Tree* root, int x) {
    // If leaf is encountered
    if (root == NULL) {
        Tree *temp = new Tree(x);
        return temp;
    }
    
    if (root -> data > x) {
        root -> left = insert_node(root -> left, x);
    }
    
    // Recur for right subtree
    else {
        root -> right = insert_node(root -> right , x);
    }
    return root;
    
}
int main() {
    Tree *root = new Tree(15);
    root -> left = new Tree(12);
    root -> right = new Tree(54);
    root -> left -> left = new Tree(8);
    root -> left -> right = new Tree(13);
    root -> left -> left -> left = new Tree(5);
    root -> right -> left = new Tree(20);
    int x = 10;
    insert_node(root, x);
    cout << “Inorder Traversal – “;
    inorder_traversal(root);
    return 0;
}
