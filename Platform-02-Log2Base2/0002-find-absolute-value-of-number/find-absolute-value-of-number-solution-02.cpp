/*
** Reads a number from user and
** prints its absolute value.
*/

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (num < 0)
        num = -num;
    
    printf("Absolute value is %d\n", num);
        
    return 0;
}
