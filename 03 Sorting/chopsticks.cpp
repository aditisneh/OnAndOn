/*Codechef
Chopsticks (singular: chopstick) are short, frequently tapered sticks used in pairs of equal length, which are used as the traditional eating utensils of China, Japan, Korea and Vietnam. Originated in ancient China, they can also be found in some areas of Tibet and Nepal that are close to Han Chinese populations, as well as areas of Thailand, Laos and Burma which have significant Chinese populations. Chopsticks are most commonly made of wood, bamboo or plastic, but in China, most are made out of bamboo. Chopsticks are held in the dominant hand, between the thumb and fingers, and used to pick up pieces of food.]

Retrieved from wikipedia

Actually, the two sticks in a pair of chopsticks need not be of the same length. A pair of sticks can be used to eat as long as the difference in their length is at most D. The Chef has N sticks in which the ith stick is L[i] units long. A stick can't be part of more than one pair of chopsticks. Help the Chef in pairing up the sticks to form the maximum number of usable pairs of chopsticks.

Input
The first line contains two space-separated integers N and D. The next N lines contain one integer each, the ith line giving the value of L[i].

Output
Output a single line containing the maximum number of pairs of chopsticks the Chef can form.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int pairSticks(vector<int> v, int D){
	int res=0;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++){
		if(v[i+1]-v[i]<=D){
			res++;
		}
	}
	return res;
}
int main(){
	vector<int> v;
	int n;
	cout<<"Enter vector size - ";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int D;
	cout<<"Enter max difference - ";
	cin>>D;
	cout<<pairSticks(v,D);
	return 0;
	
}
