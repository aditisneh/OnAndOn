#include<iostream>
#include<algorithm>
using namespace std;
 
void comparator_sort(int arr[],int n,bool flag){
	 if(flag) sort(arr, arr+n);
    else sort(arr+n,arr);
}
int main(){
	int arr[] = {-2,-4,-78,3,6,8,43,66};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Enter comparator(true/false) - "<<endl;
	bool flag;
	cin>>flag;
	comparator_sort(arr,n,flag);
	for(auto x:arr){
		cout<< x<<",";
	}
	return 0;
}
