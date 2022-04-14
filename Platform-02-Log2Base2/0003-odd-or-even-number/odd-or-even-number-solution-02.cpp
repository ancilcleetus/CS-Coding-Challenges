/*
** Reads a number from user and
** prints whether it is Odd or Even.
*/

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
        
    return 0;
}
