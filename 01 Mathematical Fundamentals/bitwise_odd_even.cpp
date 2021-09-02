/*Check number is odd even using bitwise operator
*/
#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x&1){
		cout<<"odd";
	}
	else cout<<"even";
}     
