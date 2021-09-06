#include<iostream>
using namespace std;

void setIthBit(int &n,int i){
	int mask = (1<<i);
	n = (n|mask);
}
int main(){
	int n=5;
	int i;
	cin>>i;
	setIthBit(n,i);
	cout<<n;
	return 0;
}  
