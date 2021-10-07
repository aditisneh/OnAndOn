#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	map<char, int> charfreq;
	for (int i = 0; i < str.size(); i++)
	{
		charfreq[str[i]]++; //checking the frequency of occurence of each character in the string
	}
	bool odd = false;
	for (auto it = charfreq.begin(); it != charfreq.end(); it++)
	{
		//any character can appear an odd number of times exactly once. If there are multiple
		// characters that occur an odd number of times, then palindrome is not possible.
		// Any character that apears an even number of times will always appear in pairs and hence will not
		//be a problem.
		if (it->second % 2 == 1 && odd)
		{
			cout << "Not Possible" << endl;
			return 0;
		}
		if (it->second % 2)
			odd = true;
	}
	cout << "Possible" << endl;
	return 0;
}