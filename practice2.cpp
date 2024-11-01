#include <stdio.h>
#include <string.h>

// Return the length of the longest balanced parentheses
// prefix.
int maxbalancedprefix(char* str)
{
    int balance = 0;
    int max_len = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(') {
            balance++;
        }
        else {
            balance--;
        }
        if (balance < 0) {
            break;
        }
        else if (balance == 0) {
            max_len = i + 1 > max_len ? i + 1 : max_len;
        }
    }
    return max_len;
}

int main()
{
    char str[] = "(()))())";
    printf("Length of longest balanced parentheses prefix "
           "is: %d\n",
           maxbalancedprefix(str)); // Output: 4
    return 0;
}

