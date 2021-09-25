#include<iostream>
#include "list.h"
using namespace std;
//bool search(Node * head,int key){
//	Node * temp = head;
//	while(temp!=NULL){
//		if(head->data==key){
//		
//		return true;
//		}
//		head = head->next;
//	}
//		return false;
//	}
//}
////recursive search
//bool searchRecursive(node * head, int key){
//	if(head==NULL)
//	return false;
//
//	if(head->data==key)
//{
//	return false;
//}
//else return searchRecursive(head->next,key);
//}
int main(){
	List l;
	l.push_front(1);
	l.push_front(0);
	l.push_back(3);
	l.push_back(4);
	
	l.insert(2,2);	
	l.insert(10,0);
		Node* head = l.begin();
Node *temp = head;
	while(temp!=NULL){
		cout<<temp->getData()<<" -> ";
		temp = temp->next;
	}
//	l.pop_front();
	
//	if(searchRecursive(head,1)){
//		cout<<"Element found";
//	}
//	else cout<<"not found";
		int pos;
		cin>>pos;
		if(pos==0){
					l.pop_front();
				
				}
		else l.remove_pos(pos);

	while(head!=NULL){
		cout<<head->getData()<<" -> ";
		head = head->next;
	}
	cout<<endl;
//	int key;
//	cin>>key;
//	cout<<l.recursiveSearch(key);

	return 0;
}
