/*
** Reads two numbers from user,
** swaps and then prints them.
*/

// Do not use any extra variable

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
