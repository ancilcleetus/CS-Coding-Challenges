/*
** Reads a number N from user,
** finds the sum of natural numbers upto N
** and then prints the sum.
*/

// Time Complexity = O(1)
// Space Complexity = O(1)

#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    int sum = N * (N+1) / 2;
        
    printf("Sum of natural numbers upto %d is %d\n", N, sum);
    
    return 0;
}
