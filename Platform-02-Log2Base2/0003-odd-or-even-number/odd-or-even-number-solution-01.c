/*
** Reads a number from user and
** prints whether it is Odd or Even.
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}