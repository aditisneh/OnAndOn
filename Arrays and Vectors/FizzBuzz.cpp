/* Fizzbuzz is one of the most basic problems in the coding interview world. Try to write a small and elegant code for this problem. 
Given a positive integer A, return an array of strings with all the integers from 1 to N.
But for multiples of 3 the array should have “Fizz” instead of the number.
For the multiples of 5, the array should have “Buzz” instead of the number.
For numbers which are multiple of 3 and 5 both, the array should have “FizzBuzz” instead of the number.

Example

A = 5
Return: [1 2 Fizz 4 Buzz]*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> fizzBuzz(int A) {
     vector<string> v;
    
    for(auto i=1; i<=A; i++)
    {
        if(i%15==0) 
            v.push_back("FizzBuzz");
            
        else if(i%3==0) 
            v.push_back("Fizz");
            
        else if(i%5==0) 
            v.push_back("Buzz");
            
        else 
            v.push_back(to_string(i));
    }
    
    return v;
}

int main(){
  int n;
  cout<<"Enter any number - ";
  cin>>n;
	vector<string> output = fizzbuzz(n);
	for(string x : output){
		cout << x <<",";
	}


	return 0;
}

/*Time complexity - O(n)
Space complexity - O(1) as no extra auxiliary space is involved
