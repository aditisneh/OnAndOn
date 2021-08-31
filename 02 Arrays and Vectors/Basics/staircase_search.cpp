#include<iostream>
using namespace std;
pair<int,int> staircase_search(int arr[][4], int key,int n ,int m){
	if((arr[0][0]>key) or (arr[n-1][m-1]<key)){
		return {-1,-1};	
	}
	else{
		int i=0;
		int j = m-1;
		while(j>=0 and i<=n ){
			if(arr[i][j]==key){
				return {i,j};
			}
			else{
				if(arr[i][j]<key) i++;
				else j--;
			}
	
		}
			return {-1,-1};
	}
}
int main(){
	int arr[4][4] = {	{1,2,3,4},
						{5,6,7,8},
						{9,10,11,12},
						{13,14,15,16}
				
						};
						int n=4;int m=4;
	pair<int,int> coords = staircase_search(arr,12,n,m);
	cout<<coords.first<<" "<<coords.second<<endl;
	
	return 0;
}
