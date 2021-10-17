#include<iostream>
using namespace std;
bool p(string n,int s,int e)
{
    if(s==e)
        return true;
    if(s>e)
        return true;
    if(n[s]!=n[e])
        return false;
    
    return p(n,s+1,e-1);
    
}

int main(int argc,char* argv[])
{
    string n;
    cin>>n;
    if(p(n,0,n.size()-1))
    {
        cout<<"yes";
    }
    
}