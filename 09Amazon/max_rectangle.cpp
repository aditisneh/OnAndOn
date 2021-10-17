#include<bits/stdc++.h>
using namespace std;
#defin MAX 1000

class Solution{
public:
  int maxArea (int mat[MAX][MAX], int n, int m)
  {
    for (int i = 1; i < n; i++)
      {
	for (int j = 0; j < m; j++)
	  {
	    if (mat[i][j])
	      mat[i][j] += mat[i - 1][j];
	  }
      }

    int num = 0, max_val = INT_MIN, j = 0, tp;
    for (int i = 0; i < n; i++)
      {
	stack < int >s;
	j = 0;
	num = 0;
	while (j < m)
	  {
	    if (s.empty () || mat[i][s.top ()] <= mat[i][j])
	      s.push (j++);
	    else
	      {
		tp = s.top ();
		s.pop ();
		num = mat[i][tp] * (s.empty ()? j : j - s.top () - 1);
		max_val = max (max_val, num);
	      }
	  }
	while (s.empty () == false)
	  {
	    tp = s.top ();
	    s.pop ();
	    num = mat[i][tp] * (s.empty ()? j : j - s.top () - 1);
	    max_val = max (max_val, num);
	  }
      }
    return max_val;
  }
};
int main ()
{
  int T;
  cin >> T;
  int M[MAX][MAX];

  while (T--)
    {
      int n, m;
      cin >> n >> m;
      for (int i = 0; i < n; i++)
	{
	  for (int j = 0; j < m; j++)
	    {
	      cin >> M[i][j];
	    }
	}
      Solution obj;
      cout << obj.maxArea (M, n, m) << endl;
    }
}
