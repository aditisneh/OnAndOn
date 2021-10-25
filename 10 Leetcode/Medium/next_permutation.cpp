class Solution {
public:
    void nextPermutation(vector<int>& a) {
        //find first smallest from end key
    int i=a.size()-2;
    if(i<0)  return;
    while(i>=0)
    {
        if(a[i]<a[i+1]) break;
        i--;
    }
    
    
    if(i<0)
    {
        reverse(a.begin(),a.end());
        return;
    }
    //find the first highest number than key
    
    int j=a.size()-1;
    for( ;j>i;j--)
    {
        if(a[j]>a[i]) break;
    }
    
    //swap the two
    swap(a[i],a[j]);
    
    //reverse from (i+1)th element to the last
    reverse(a.begin()+i+1,a.end());
    
    }
};
