#include<iostream>
using namespace std;
void clearIthBit(int &n,int i){
	int mask = ~(1<<i);
	n = n&mask;
}

void updateIthBit(int &n,int i,int v){
	clearIthBit(n,i);
	int mask = (v<<i);
	n = (n|mask);
}
int main(){
	int n=13;
	int i;
	cin>>i;
	cout<<"Enter 0/1  - ";
	int val;
	cin>>val;
	updateIthBit(n,i,val);
	cout<<n;
	return 0;
}  
