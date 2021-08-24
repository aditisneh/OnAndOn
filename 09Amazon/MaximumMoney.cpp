
Given street of houses (a row of houses), each house having some amount of money kept inside; now there is a thief who is going to steal this money but he has a constraint/rule
that he cannot steal/rob two adjacent houses. Find the maximum money he can rob.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and money.

Output:

Print maximum money he can rob.

Constraints:

1 = T = 100
1 = money = 100
1 = N = 1000

Example:

Input:

2

5 10

2 12

Output:

30

12
*/

#include <iostream>
using namespace std;

int main() {
	int T, N, M, i;
	cin >> T;
	
	while(T--) {
	    cin >> N >> M ;
	    if(N&1) {
	    	cout << (((N/2)+1)*M) << endl;
		}
		else {
			cout << (M*(N/2)) << endl;
		}
	}
	return 0;
}
