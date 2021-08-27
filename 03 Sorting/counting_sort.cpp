#include<iostream>
#include<vector>
using namespace std;
 
void counting_sort(int arr[],int n){
int largest=-1;
for(int i=0;i<n;i++){
	largest  = max(largest,arr[i]);
}
vector<int> freq(largest+1,0);

for(int i=0;i<n;i++){
	freq[arr[i]]++;
}
int j=0;
for(int i=0;i<=largest;i++){
	while(freq[i]>0){
		arr[j] = i;
		freq[i]--;
		j++;
	}
}
return;
}
int main(){
	int arr[] = {2,4,78,3,6,8,43,66};
	int n = sizeof(arr)/sizeof(int);
	counting_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
//doesnt work for negative
