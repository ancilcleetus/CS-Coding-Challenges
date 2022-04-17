/*
** Reads a number num from user,
** splits it into digits
** and prints them.
*/

// Time Complexity = O(N)
// Space Complexity = O(1)

#include <stdio.h>

int main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in %d are ", num);
    while (num != 0) {
        digit = num % 10;
        num = num / 10;
        printf("%d ", digit);
    }
    
    return 0;
}
