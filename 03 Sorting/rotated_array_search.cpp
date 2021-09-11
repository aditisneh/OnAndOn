#include<iostream>
#include<vector>
using namespace std;
int rotatedsearch(vector<int> arr, int key){
	int s = 0;
	int e = arr.size()-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key) return mid;
		
		//2cases
		if(arr[s]<=arr[mid]){
			if(key>=arr[s] && key<=arr[mid]){
				e = mid-1;
			}
			else{
				s = mid+1;
			}
		}
		else{
			if(key>=arr[mid] && key<=arr[e]){
				s = mid+1;
			}
			else{
				e = mid-1;
			}
		}
	}
	return -1;
}
int main(){
	vector<int> arr{6,7,8,9,1,2,3,4,5};
	int n = arr.size();
	cout<<"Enter element to searched - ";
	int x;
	cin>>x;
int ans = 	rotatedsearch(arr,x);
	if(ans==-1) cout<<"element not found";
	else cout<<"Element is at "<<ans<< " index";
	return 0;
}
