// C++ Program to find minimum number of '(' or ')'
// must be added to make Parentheses string valid.
#include <bits/stdc++.h>
using namespace std;

// Function to return required minimum number
int minParentheses(string p)
{

	// maintain balance of string
	int bal = 0;
	int ans = 0;

	for (int i = 0; i < p.length(); ++i) {

		bal += p[i] == '(' ? 1 : -1;

		// It is guaranteed bal >= -1
		if (bal == -1) {
			ans += 1;
			bal += 1;
		}
	}

	return bal + ans;
}

// Driver code
int main()
{

	string p = "())";

	// Function to print required answer
	cout << minParentheses(p);

	return 0;
}

