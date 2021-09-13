#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(string a, string b){
	if(a.length()==b.length()) return a<b;
	return a.length()<b.length();
}
void findSubset(char *input, char *output, int i,int j,vector<string> &s){
	if(input[i]=='\0'){
		output[j] = '\0';
		s.push_back(output);
		return;
	}
	//include input's ith element in output
	output[j] = input[i];
	//include ith element
	findSubset(input,output,i+1,j+1,s);
	//exclude ith element
	findSubset(input,output,i+1,j,s);
}
int main(){
	char input[100];
	char output[100];
	cin>>input;
	vector<string> s;
	findSubset(input,output,0,0,s);
	sort(s.begin(),s.end(),compare); //lexicographical sorting + length wise sorting
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<endl;
	}
	return 0;
}
