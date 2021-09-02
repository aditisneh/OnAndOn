#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int calculate(vector <int> m){
	return m[0]+m[1]+m[2];
}
bool compare(pair<string,vector<int> > s1, pair<string,vector<int> >s2){
	vector<int> m1 = s1.second;
	vector<int> m2 = s2.second;
	return calculate(m1)>calculate(m2);
}

int main(){
	vector<pair<string,vector<int> > > marks = {
	{"Alexa",{10,20,30}},
	{"Cortona",{10,21,2}},
	{"Siri",{23,11,24}},
	{"Bibxy",{11,22,11}}
	
	};
	
	sort(marks.begin(), marks.end(),compare);
	
	for(auto s: marks){
		cout<<s.first<<" "<<calculate(s.second)<<endl;
	}
	return 0;
	
}
