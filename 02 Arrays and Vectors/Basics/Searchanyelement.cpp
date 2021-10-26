// WAP to search any element in an array

#include<iostream>
using namespace std;

int main()
{
        int arr[10], i, num, n, cnt=0, pos;
        cout<<"\n Enter Array Size : ";
        cin>>n;
        cout<<"\n Enter Array Elements : \n";
        for(i=0; i<n; i++)
        {
                cout<<" ";
                cin>>arr[i];
        }
        cout<<"\n Enter Element to be Searched : ";
        cin>>num;
        for(i=0; i<n; i++)
        {
                if(arr[i]==num)
                {
                        cnt=1;
                        pos=i+1;
                        break;
                }
        }
        if(cnt==0)
        {
                cout<<"\n Element Not Found..!!";
        }
        else
        {
                cout<<"\n Element "<<num<<" Found At Position "<<pos;
        }
        return 0;
}
