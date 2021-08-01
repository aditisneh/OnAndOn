/*Given an array containing N integers, and an number S denoting a target sum.
Find all distinct integers that can add up to form target sum. The numbers in each triplet
should be in ascending order, and triplets should be ordered too.
Retrun empty array if no such triplet exists.
Approach 1 - Brute force
Three loops seraching for exact sum
Time Complexity - O(n^3)
Approach 2 - Pair Sum Unordered Set 
Using Pair sum approach for every element in array
Time Complexity - O(n^2) 
As we are using a data structure unordered set, Extra space - O(n)
Approach 3 - Sorting & Two pointer Pair Sum
Sort the array - O(n log n)
Iterate arr[i] for Pair sum of rest using two pointer - O(n^2)
Time Complexity - O(n^2)
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum){
	vector<vector<int>> result;
	sort(arr.begin(),arr.end());
	int n = arr.size();
	//pick every arr[i], pair sum for remaining part
	for(int i=0;i<=n-3;i++){
		int j=i+1;
		int k = n-1;
		
		//two pointer
		while(j<k){
			int current_sum = arr[i];
			current_sum+=arr[j];
			current_sum+=arr[k];
			
		if(current_sum==sum){
				result.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			else if(current_sum > sum){
				k--;
			}
			else{
				j++;
			}
		}
		
	}
	return result;
}
int main(){
	vector<int> arr;
	int n;
	cout<<"Enter size - ";
	cin>>n;
	cout<<"Enter elements - ";
	while(n--){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	int S;
	cout<<"Enter the sum value - ";
	cin>>S;
	auto p = triplets(arr,S);
	if(p.size()==0){
		cout<<"No such pair";
	}
	else{
	for(auto v : p)
	{
		for( auto num : v){
			cout<<num<<",";
		}
		cout<<endl;
	}
	}
}
