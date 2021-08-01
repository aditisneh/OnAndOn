#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key)
		return i;
	}
	return -1;
}

int main(){
	int arr[] = {10,18,7,37,33,78,12,34};
	int n = sizeof(arr)/sizeof(int);
	
	int key;
	cin>>key;
	
	int index = linear_search(arr,n,key);
	if(index==-1) cout<<"Element not found";
	else cout<<"Element found at index : "<<index;
	
	return 0;
}
//time complexity - as we are iterating throghout the array once, time complexity is O(n)
