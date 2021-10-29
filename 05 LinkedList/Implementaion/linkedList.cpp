#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* link;   
};

Node* head;

void Insert(int value, int index){
    if (index==1){
        Node* temp2 = new Node();
        temp2->data = value; 
        temp2->link = head;

        head = temp2;
    }else{
        //trsverse from head to n-1
        Node* it1 = head;
        for (int i=1; i<index-1; i++){
            it1 = it1->link;
        }
        Node* temp2 = new Node();
        temp2->link = it1->link;
        temp2->data=value;
        it1->link = temp2;

    }
};

void printList(){
    Node* it2 = head;
    if (it2 == NULL){
        cout << "List is empty";
    }else{
        while (it2 != NULL){
            cout << it2->data << " ";
            it2 = it2->link;
        }
    }    
};

void Delete(int pos){
    if (pos==1){
        head = head->link;
        return;
    }
    Node* it3 = head;
    for (int i=1; i<pos-1; i++){
        it3 = it3->link;
    }

    it3->link = it3->link->link;
};


int main(){
    head = NULL; 

    for(int i=0; i<5; i++){
        Insert(2*i, i+1);
    }

    Delete(2);

    printList();
}