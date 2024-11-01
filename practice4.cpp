// C++ program to find number of closing
// brackets needed and complete a regular
// bracket sequence
#include <iostream>
using namespace std;

// Function to find number of closing
// brackets and complete a regular
// bracket sequence
void completeSequence(string s)
{
	// Finding the length of sequence
	int n = s.length();

	int open = 0, close = 0;

	for (int i = 0; i < n; i++)
	{
		// Counting opening brackets
		if (s[i] == '(')
			open++;
		else
			// Counting closing brackets
			close++;

		// Checking if at any position the
		// number of closing bracket
		// is more then answer is impossible
		if (close > open)
		{
			cout << "Impossible" << endl;
			return;
		}
	}

	// If possible, print 's' and 
	// required closing brackets.
	cout << s;
	for (int i = 0; i < open - close; i++)
		cout << ')';
	cout << endl;
}

// Driver code
int main()
{
	string s = "(()(()(";
	completeSequence(s);
	return 0;
}

// This code is contributed by
// sanjeev2552

