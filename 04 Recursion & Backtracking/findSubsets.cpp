#include<iostream>
using namespace std;
void printSubset(char *input, char *output, int i,int j){
	if(input[i]=='\0'){
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}
	//include input's ith element in output
	output[j] = input[i];
	//include ith element
	printSubset(input,output,i+1,j+1);
	//exclude ith element
	printSubset(input,output,i+1,j);
}
int main(){
	char input[100];
	char output[100];
	cin>>input;
	printSubset(input,output,0,0);
	return 0;
}
