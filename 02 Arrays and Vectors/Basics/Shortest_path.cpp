/*I/P - Directions from axis 0,0 ,ie South -S North N East E West W
O/P Shortest path from origin  in terms of directions*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int y=0;
	int x=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		switch(s[i]){
			case 'N': y++;break;
			case 'S': y--;break;
			case 'E': x++;break;
			case 'W': x--;break;
		}
	}	
	if(x>=0 && y>=0){
		while(y--) cout<<'N';
		while(x--) cout<<'E';
	}
	else if(x<=0 && y>=0){
		while(y--) cout<<"N";
		while(x++) cout<<"W";
	}
	else if(x<=0 && y<=0){
		while(y++) cout<<"S";
		while(x++) cout<<"W";
	}
	else if(x>=0 && y<=0){
		while(y++) cout<<"S";
		while(x--) cout<<"E";
	}
	
}
