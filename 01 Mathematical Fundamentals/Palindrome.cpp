#include<iostream>
using namespace std;
int main(){
	int n,sum=0,r,temp;
	cin>>n;
	temp=n;
	while(n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
		
	}
if (sum==temp)
cout<<"Given number is palindrome";
else
cout<<"Given number is not a palindrome";	
}
