#include<iostream>
using namespace std;
int fastExpo(int a,int n){
	int ans = 1;
	while(n>0){
		int lastbit = (n&1);
		if(lastbit){
			ans = ans*a;
		}
		a = a*a;
		n = n>>1;
	}
	return ans;
}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<fastExpo(a,n)<<endl;
	return 0;
}
//Time complexity O(k) where k is number of set bits in n

