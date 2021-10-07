#include<iostream>
using namespace std;


int gcd(int n,int m){
	if (not n){
		return m;
	}
	else if (not m){
		return n;
	}
	if (n>m){
		return gcd(n%m,m);
	}
	else{
		return gcd (m%n,n);
	}
}
int main(){
	long long int n,m;
	cin>>n>>m;
	cout<<gcd(n,m);

}