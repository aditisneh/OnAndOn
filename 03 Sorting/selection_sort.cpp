#include<iostream>
using namespace std;
 
void selection_sort(int arr[],int n){

	for(int i=0;i<n-1;i++){
		int current = arr[i];
		int min_pos = i;
		for(int j=i;j<n;j++){
			if(arr[j]<arr[min_pos]){
				min_pos = j;
			}
		}
		swap(arr[min_pos],arr[i]);
	}
}
int main(){
	int arr[] = {-2,-4,-78,3,6,8,43,66};
	int n = sizeof(arr)/sizeof(int);
	selection_sort(arr,n);
	for(auto x:arr){
		cout<< x<<",";
	}
	return 0;
}
