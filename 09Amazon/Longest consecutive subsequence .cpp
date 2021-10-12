#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
		set<int>s;int count=1;int ans=1;
		for(int i=0;i<N;i++)
		if(s.find(arr[i])==s.end())
		s.insert(arr[i]);
		auto it=s.begin();
		auto prev=it;
		++it;
		for(it;it!=s.end();++it)
		{
		   if(*it-*prev==1)
		   count++;
		   else
		   count=1;
		   prev=it;
		   ans=max(ans,count);
		}
		return ans;
	}
};

int main ()
{
  int t,n,i,a[10001];
  cin >> t;
  while (t--)
    {
      cin>>n;
      for(int i=0;i<n;i++)
      	cin>>a[i];
      Solution obj;
      cout<<obj.finLongestConseqSubseq(a,n)<<endl;
      }    
  return 0;
}
