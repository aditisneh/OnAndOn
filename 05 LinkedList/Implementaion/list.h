#include<iostream>
using namespace std;
class List;//forward dec
class Node{
	int data;
	 
public:
	Node *next;
	Node(int d): data(d), next(NULL){}
	int getData(){
		return data;
	}
//	~Node(){
//		if(next!=NULL){
//			delete next;
//		}
//		cout<<"Deleting Node - "<<data<<endl;
//	}
	friend class List;

};
class List{
	Node *head;
	Node *tail;
	
	int helper(Node *start , int key){
		//base case
		if(start==NULL) return -1;
		
		if(start->data==key) return 0;
		
		int subind = helper(start->next,key);
		if(subind==-1){
			return -1;
		}
		return subind+1;
	}
	
public:
	List():head(NULL),tail(NULL){}
	
	Node* begin(){
		return head;
	}
	
	void push_front(int data){
		if(head==NULL){
			Node *n = new Node(data); //dynamic mem alloc for mem to remain
			head=tail=n;
			return;
		}
		else{
			Node *n = new Node(data);
			n->next = head;
			head = n;
		}
	}
	void push_back(int data){
		Node *n = new Node(data);
		tail->next = n;
		tail =n;
	}
	void insert(int data, int pos){
		if(pos==0){
			push_front(data);
			return;
		}
		//otherwise
		Node * temp = head;
		for(int jump=1;jump<=pos-1;jump++){
			temp = temp->next;
		}
		Node *n = new Node(data);
		n->next = temp->next;
		temp->next = n;
	}
	int search(int key){
		Node *temp = head;
		int ind=0;
		while(temp!=NULL){
			if(temp->data==key){
				return ind;
			}
			ind++;
			temp=temp->next;
		}
		return -1;
	}
	int recursiveSearch(int key){
		int ind=helper(head,key);
		return ind;
	
	}
	void pop_front(){
		Node *temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	void remove_pos(int pos){
		
		Node * temp = head;
		int k=1;
		while(temp!=NULL and k<pos){
			temp = temp->next;
			k++;
		}
		Node * n = temp->next;
		temp->next = n->next;
		n->next=NULL;
		delete(n);
	}
//	~List(){
//		if(head!=NULL)
//		delete head;
//		head = NULL;
//	}
};
