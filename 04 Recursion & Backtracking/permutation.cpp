#include<iostream>
#include<string>
using namespace std;
void permutation(string s, int l, int r){
	if(l==r){
	 cout<<s<<endl;
	 return;
    }
    else{
    	for(int i=l;i<=r;i++){
    		swap(s[l],s[i]);
    		permutation(s, l+1, r);
    		swap(s[l],s[i]);
		}
	}

}
int main(){
	string s;
	cin>>s;
	int l=0;
	int r = s.length()-1;
	permutation(s,l,r);
	return 0;
}
