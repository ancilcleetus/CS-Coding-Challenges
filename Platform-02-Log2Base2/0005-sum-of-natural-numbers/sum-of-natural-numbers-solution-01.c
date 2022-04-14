/*
** Reads a number N from user,
** finds the sum of natural numbers upto N
** and then prints the sum.
*/

#include <stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
        sum += i;
        
    printf("Sum of natural numbers upto %d is %d\n", N, sum);
    
    return 0;
}
