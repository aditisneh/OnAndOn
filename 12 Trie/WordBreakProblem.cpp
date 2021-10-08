#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define CHAR_SIZE 26

struct Node
{
    bool exist;      
    Node* next[CHAR_SIZE];
 
  
    Node()
    {
        exist = false;
 
        for (int i = 0; i < CHAR_SIZE; i++) {
            next[i] = nullptr;
        }
    }
};
 

void freeTrie(Node* node)
{
    if (!node) {
        return;
    }
 
    for (int i = 0; i < CHAR_SIZE; i++) {
        freeTrie(node->next[i]);
    }
 
    delete node;
}

void insertTrie(Node* const head, string const &s)
{
    // start from the root node
    Node* node = head;
 
    // do for each character in the string
    for (char ch: s)
    {
        
        if (node->next[ch - 'a'] == nullptr) {
            node->next[ch - 'a'] = new Node();
        }
 
        // go to the next node
        node = node->next[ch - 'a'];
    }
 
    // mark the last node as a leaf
    node->exist = true;
}
 
bool wordBreak(Node* const head, string const &s)
{
  
    int n = s.length();

    vector<bool> good(n + 1);
    good[0] = true;        // base case
 
    for (int i = 0; i < n; i++)
    {
        if (good[i])
        {
            Node* node = head;
            for (int j = i; j < n; j++)
            {
                if (!node) {
                    break;
                }
 
                node = node->next[s[j] - 'a'];
 
    
                if (node && node->exist) {
                    good[j + 1] = true;
                }
            }
        }
    }
 
    return good[n];
}
 
int main()
{
  
    vector<string> dict =
    {
        "this", "th", "is", "famous", "word", "break", "b", "r",
        "e", "a", "k", "br", "bre", "brea", "ak", "prob", "lem"
    };
 
 
    string s = "wordbreakproblem";
 
   
    Node* trie = new Node();
    for (string const &s: dict) {
        insertTrie(trie, s);
    }
 
    // check if the string can be segmented or not
    if (wordBreak(trie, s)) {
        cout << "The string can be segmented";
    }
    else {
        cout << "The string can't be segmented";
    }
 
    // deallocate memory used by the Trie
    freeTrie(trie);
 
    return 0;
}
