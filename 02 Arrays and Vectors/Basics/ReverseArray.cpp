//reverse array inplace
#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
	int s=0;
	int e = n-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
}

int main(){
	int arr[] = {10,18,7,37,33,78,12,34};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Reversed Array - "<<endl;
    reverseArray(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
//time complexty - as we are using two pointers TC : O(logn)
//space complexity - O(1)
