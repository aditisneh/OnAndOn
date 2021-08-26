#include<iostream>
using namespace std;
 
void insertion_sort(int arr[],int n){
	//finding correct index for the element to be inserted
	for(int i=1;i<n;i++){
		int current = arr[i];
		int prev = i-1;
		while(prev>=0 and arr[prev]>current){
			arr[prev+1] = arr[prev];
			prev = prev-1;
		}
		arr[prev+1] = current;
	}
}
int main(){
	int arr[] = {-2,-4,-78,3,6,8,43,66};
	int n = sizeof(arr)/sizeof(int);
	insertion_sort(arr,n);
	for(auto x:arr){
		cout<< x<<",";
	}
	return 0;
}
