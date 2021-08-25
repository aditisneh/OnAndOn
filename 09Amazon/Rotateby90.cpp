
#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


 // } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void transpose(vector<vector<int> > &arr){
    int R=arr[0].size();
    int C=R;
    for (int i = 0; i < R; i++)
        for (int j = i; j < C; j++)
            swap(arr[i][j], arr[j][i]);
}

void revcol(vector<vector<int> > &arr)
{ int R=arr[0].size();
    int C=R;
    for (int i = 0; i < C; i++)
        for (int j = 0, k = C - 1; j < k; j++, k--)
            swap(arr[j][i], arr[k][i]);
}
void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    transpose(matrix);
    revcol(matrix);
}


int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

  // } Driver Code Ends
