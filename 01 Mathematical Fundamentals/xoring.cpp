/*We are given an array containing n numbers. All numbers are present twice expcept
for one number which is only present once. Find the unique number without taling any extra space and in linear time.
*/
#include<iostream>
#include<vector>
using namespace std;
int xoring(vector<int> v){
	int res = 0;
	for(auto x : v){
		res ^=x;
	}
	return res;
}
int main(){
	int n;
	cout<<"Enter n - ";
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
	int x;
	cin>>x;
	arr.push_back(x);	
	}
	cout<<xoring(arr);
	
}
