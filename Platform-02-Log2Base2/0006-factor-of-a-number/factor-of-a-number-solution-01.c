/*
** Reads two numbers N, X from user,
** finds whether X is a factor of N
** and then prints the finding.
*/

// Time Complexity = O(1)
// Space Complexity = O(1)

#include <stdio.h>

int main()
{
    int N, X;
    printf("Enter numbers: ");
    scanf("%d%d", &N, &X);

    if (N % X == 0)
        printf("%d is a factor of %d\n", X, N);
    else
        printf("%d is not a factor of %d\n", X, N);
    
    return 0;
}
