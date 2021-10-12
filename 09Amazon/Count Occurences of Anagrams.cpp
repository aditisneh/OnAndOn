#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int search (string pat, string txt)
  {
    // code here
    int count = 0;
      vector < int >pat_count (26, 0), cur_count (26, 0);

    for (char ch:pat)
      {
	pat_count[ch - 'a']++;
      }

    for (int i = 0; i < txt.size (); i++)
      {
	cur_count[txt[i] - 'a']++;

	if (i >= pat.size ())
	  {
	    cur_count[txt[i - pat.size ()] - 'a']--;
	  }

	if (i >= pat.size () - 1)
	  {
	    if (cur_count == pat_count)
	      count++;
	  }

      }

    return count;
  }
};

int main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      string pat, txt;
      cin >> txt >> pat;
      Solution ob;
      auto ans = ob.search (pat, txt);
      cou << ans << "\n";
    }
  return 0;
}