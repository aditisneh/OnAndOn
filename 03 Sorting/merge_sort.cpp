#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr, int s,int e){
	int i =s;
	int mid = (s+e)/2;
	int j =mid+1;
	vector<int> temp;
	while(i<=mid && j<=e){
		if(arr[i]<arr[j]){
			temp.push_back(arr[i]);
			i++;
		}
		else 
		{
		temp.push_back(arr[j]);
		j++;}
	}
	//copy remaining elements
	while(i<=mid){
		temp.push_back(arr[i++]);
	}
	while(j<=e){
		temp.push_back(arr[j++]);
	}
	
	//copy into new array
	for(int i=s,k=0;i<=e;i++){
		arr[i] = temp[k];
		k++;
	}
	return;
}
void mergesort(vector<int> &arr, int s, int e){
if(s>=e) return;
//recursive part
int mid = (s+e)/2;
mergesort(arr,s,mid);
mergesort(arr,mid+1,e);

return merge(arr,s,e);
}
int main(){
	vector<int> arr{2,5,34,21,56,11,67,88,23,1};

	int e = arr.size()-1;
	int s =0;
	
	mergesort(arr,s,e);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
