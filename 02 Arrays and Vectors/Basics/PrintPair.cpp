#include<iostream>
using namespace std;
void printPair(int arr[], int n){
	for(int i=0;i<n;i++){
		int x = arr[i];
		for(int j=i+1;j<n;j++){
			int y = arr[j];
			cout<<x<<" , "<<y<<endl;
		}
		cout<<endl;
	}
}
int main(){
	int arr[] = {10,18,7,37,33,78,12,34};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Printing all pairs- "<<endl;
    printPair(arr,n);
	
	return 0;
}
//time complexity O(n^2)
