#include<iostream>
using namespace std;
void printSubArray(int arr[], int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
	
	}
}
void printSubArraysum(int arr[], int n){
int max =0;
	for(int i=0;i<n;i++){
		
		for(int j=i;j<n;j++){
			int sum = 0;
			for(int k=i;k<=j;k++){
				sum = sum+arr[k];
				
			}
	
				if(max<sum)
					max = sum;
		}	
	
	}
	cout<<"max sum of subarray is = "<<max;
}
int main(){
	int arr[] = {10,18,7,37,33,78,12,34};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Printing all sub arrays - "<<endl;
    printSubArray(arr,n);
    cout<<"Printing max sum - "<<endl;
    printSubArraysum(arr,n);
	
	return 0;
}
//time complexity O(n^3)

