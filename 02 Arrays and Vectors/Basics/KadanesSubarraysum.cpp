#include<iostream>
using namespace std;

int KadanesSubArraysum(int arr[], int n){
	int sum = 0 ;
	int largest = 0;
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
		if(sum<0)
			sum = 0;
		
		largest = max(largest,sum);
	}
	return largest;
}
int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
    cout<<"Maximun sum from the array is - "<<KadanesSubArraysum(arr,n);
	
	return 0;
}
//time complexity O(n)

