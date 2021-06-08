/*You are given two positive numbers A and B. You need to find the maximum valued integer X such that:

X divides A i.e. A % X = 0
X and B are co-prime i.e. gcd(X, B) = 1
For example,

A = 30
B = 12
We return
X = 5*/
#include<iostream>
using namespace std;
int gcd(int m, int n) {
         
        if(m < n)
               swap(m, n);
        
        if(n == 0)
               return m;
         

        return gcd(m % n, n);
  }
  int cpFact(int x, int y) {
    while (gcd(x, y) != 1) {
        x = x / gcd(x, y);
    }
    return x;
}
int main(){
	int a,b;
	cout<<"Enter two numbers - ";
	cin>>a>>b;
	cout<<cpFact(a,b);
}
