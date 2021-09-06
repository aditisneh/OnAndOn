#include<iostream>
using namespace std;

void ClearlastIthBit(int &n,int i){
	int mask = (-1<<i);
	n = (n&mask);
}
int main(){
	int n=13;
	int i;
	cin>>i;
	ClearlastIthBit(n,i);
	cout<<n;
	return 0;
}  
