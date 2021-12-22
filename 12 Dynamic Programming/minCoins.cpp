#include<iostream>
using namespace std;

int minCoins(int n, int coins[], int T, int dp[]){
	//base case
	if(n==0){
		return 0;
	}
	//lookup		
	if(dp[n]!=0){
		return dp[n];
	}
	int ans = INT_MAX;
	for(int i=0;i<T;i++){ 
	if(n-coins[i]>=0){
		int subprob = minCoins(n-coins[i],coins,T,dp);
		ans = min(ans,subprob+1);
		}
	}
	dp[n] = ans;
	return dp[n];
}

//bottom up
int mincoinBU(int N, int coins[], int T){
	int dp[100] = {0};
	
	//Iterate over all states 1..N
	for(int n=1;n<=N;n++){
		//init the current ans as int_max
		dp[n] = INT_MAX;
		
		for(int i=0;i<T;i++){
			if(n-coins[i]>=0){
				int subprob = dp[n-coins[i]];
				dp[n] = min(dp[n],subprob+1);
			}
		}
	}
	return dp[N];
}

int main(){
	int N =15;
	int coins[] = {1,7,10};
	int dp[100] = {0};
	int T = sizeof(coins)/sizeof(int);
	
//	cout<<minCoins(N,coins,T,dp);
	cout<<mincoinBU(N,coins,T);
}
