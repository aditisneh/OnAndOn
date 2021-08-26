#include<iostream>
using namespace std;
 
void bubble_sort(int arr[],int n){
	for(int times = 1;times<n;times++){
		for(int j=0;j<=n-times-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int arr[] = {-2,-4,-78,3,6,8,43,66};
	int n = sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);
	for(auto x:arr){
		cout<< x<<",";
	}
	return 0;
}
