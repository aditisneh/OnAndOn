/*Given an array containing N integers and a number S denoting a target sum.
Find two distinct integers that can pair up to form target sum.
Let us assume there will be only one such pair.

Input:
array = [10,5,2,3,-6,9,11]

Output
[10,-6]

Approach 1 - Brute Force
Comparing every digit from all other digits
Time Complexity - O(n^2)

Approach 2 - Search for element x = S-arr[i]
Binary Search for the element O(log n)
Traversing array - O(n)
Total Time complexity - O(n log n)

Approach 3 - Two pointer
Using two pointers at start and end, check for sum in a sorted array.
Sorting - O(nlog n)
Two pointer traversing - O(n)
Total timecomplexity - O(n log n)

Approach 4 - Unordered Set
Checking for element in set O(1) if present return else insert that elemnt into set.
Time Complexity (most optimal) - O(n)
*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
 
vector<int> pairSum(vector<int> arr, int Sum){
	unordered_set<int> s;
	vector<int> result;
	
	for(int i=0;i<arr.size();i++){
		int x = Sum-arr[i];
		if(s.find(x)!=s.end()){
			result.push_back(x);
			result.push_back(arr[i]);
			return result;
		}
		//insert the curent no. inside set to avoid duplicates as in ques it's mentioned distinct numbers
		s.insert(arr[i]);
	}
	return {};
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
	auto p = pairSum(arr,S);
	if(p.size()==0){
		cout<<"No such pair";
	}
	else{
		cout<<p[0]<<","<<p[1]<<endl;
	}
}
