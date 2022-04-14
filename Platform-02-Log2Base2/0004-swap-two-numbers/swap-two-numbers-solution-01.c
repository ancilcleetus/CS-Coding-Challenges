/*
** Reads two numbers from user,
** swaps and then prints them.
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int temp = a;
    a = b;
    b = temp;

    printf("Swapped numbers are %d and %d\n", a, b);
    
    return 0;
}
