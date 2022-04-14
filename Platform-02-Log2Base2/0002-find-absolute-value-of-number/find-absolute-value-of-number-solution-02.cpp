/*
** Reads a number from user and
** prints its absolute value.
*/

// Time Complexity = O(1)
// Space Complexity = O(1)

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (num < 0)
        num = -num;
    
    std::cout << "Absolute value is " << num << std::endl;
        
    return 0;
}
