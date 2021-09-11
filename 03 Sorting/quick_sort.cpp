#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int s,int e){
	int pivot = arr[e];
	int i = s-1;
	for(int j=s;j<e;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[e]);
	return i+1;
}
void quicksort(vector<int> &arr, int s, int e){
	if(s>=e){
		return;
	}
	int p = partition(arr,s,e);
	quicksort(arr,s,p-1);
	quicksort(arr,p+1,e);
}
int main(){
	vector<int> arr{2,5,34,21,56,11,67,88,23,1};

	int e = arr.size()-1;
	int s =0;
	
	quicksort(arr,s,e);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
