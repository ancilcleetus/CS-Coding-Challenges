/*
** Reads a number from user and
** prints whether it is Odd or Even.
*/

// Time Complexity = O(1)
// Space Complexity = O(1)

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
