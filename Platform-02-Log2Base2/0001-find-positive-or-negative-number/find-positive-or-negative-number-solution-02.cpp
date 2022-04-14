/*
** Reads a number from user and prints
** whether it is Positive or Negative.
*/

// Time Complexity = O(1)
// Space Complexity = O(1)

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (num > 0)
        std::cout << "Positive" << std::endl;
    else if (num < 0)
        std::cout << "Negative" << std::endl;
    else
        std::cout << "Neither positive nor negative" << std::endl;
        
    return 0;
}
