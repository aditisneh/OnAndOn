#include<iostream>
#include<stack>
using namespace std;

//to reverse stack using recursion

//inserts element at the bottom of the stack
void insertAtEnd(stack<int> &s, int x)
{
    //base case
    if(s.empty())
    {
        s.push(x);
        return;
    }
    
    //rec case
    int data=s.top();
    s.pop();
    insertAtEnd(s,x);
    s.push(data);
    
}

//recursivly reduces the size of stack
void revStack(stack<int> &s)
{
    //base case
    if(s.empty())
      return;
    int x=s.top();
    s.pop();
    //rec case
    revStack(s);
    
    insertAtEnd(s,x);
      
}

istream& operator>>(istream& is, stack<int> &s)
{
    int d;
    cin>>d;
    while(d!=-1)
    {
        s.push(d);
        cin>>d;
    }
    return is;
}

ostream& operator<<(ostream& os, stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
        
    }
    cout<<endl;
    return os;
}

int main()
{
    stack<int> s;
    cin>>s;
    cout<<"Before Rversing : "<<s;
    
    revStack(s);
    
    cout<<"After Reversing : "<<s;
    
}
