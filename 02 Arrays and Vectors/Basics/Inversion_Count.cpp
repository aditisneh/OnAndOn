
/*The program below gives the count of the steps an array 
is away from being a sorted one*/

#include<iostream>
using namespace std;

#define ll long long int

ll crossInversion(ll *a,ll s,ll mid,ll e)
{
    ll temp[500000];
    ll count=0;
    ll i=s,j=mid+1,k=s;
    
    while(i<=mid and j<=e)
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
            count+=mid-i+1;
        }
    }
    
    //now to put the remaining elements of one array if the other gets empty
    //if second part becomes empty
    while(i<=mid)
       temp[k++]=a[i++];
       
    //if first part gets empty
    while(j<=e)
       temp[k++]=a[j++];
    
    //add sorted elements from temp array to original array
    for(int i=s;i<=e;i++)
      a[i]=temp[i];
       
    return count;
}

ll splitArray(ll *a,ll s,ll e)
{
    if(s>=e)
       return 0;
    
    ll mid=(s+e)/2;
    ll x=splitArray(a,s,mid);
    ll y=splitArray(a,mid+1,e);
    ll z=crossInversion(a,s,mid,e);
    return x+y+z;
}

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<splitArray(a,0,n-1);        
}
