/*
** Reads two numbers from user,
** swaps and then prints them.
*/

// Do not use any extra variable
// Time Complexity = O(1)
// Space Complexity = O(1)

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swapped numbers are %d and %d\n", a, b);
    
    return 0;
}
