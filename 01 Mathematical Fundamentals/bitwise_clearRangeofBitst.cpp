#include<iostream>
using namespace std;
void ClearRangeofBits(int &n,int i,int j){
	int a = (-1<<(j+1));
	int b = (1<<i)-1;
	int mask = a|b;
	n = n&mask;
}
int main(){
	int n=31;
	int i;
	cin>>i;
	int j;
	cin>>j;
	ClearRangeofBits(n,i,j);
	cout<<n;
	return 0;
}  
