/*
** Reads a number from user and
** prints its absolute value.
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;
    
    printf("Absolute value is %d\n", num);
    

    return 0;
}
