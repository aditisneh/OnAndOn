#include<iostream>
using namespace std;

int binaryStrings(int n){
    if(n==0) return 0;
   if(n==1) return 2;
   if(n==2) return 3;
   return binaryStrings(n-1) + binaryStrings(n-2);
    
}
int main(){
	int n;
	cin>>n;
	cout<<"Numbers without consecutive 1's are - "<<binaryStrings(n)<<endl;
	return 0;
	
}
