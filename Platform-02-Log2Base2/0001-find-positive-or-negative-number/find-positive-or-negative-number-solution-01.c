/*
** Reads a number from user and prints
** whether it is Positive or Negative.
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Neither positive nor negative\n");
    
    return 0;
}
