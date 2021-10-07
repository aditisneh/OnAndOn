#include <iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	long long int arr[n+1];

	arr[0] =0;
	arr[1]=1;

	for (int i =2;i<=n;i++){
		arr[i] = arr[i-1]+ arr[i-2];
	}

	cout<<arr[n];
}






