/*
** Reads a number num from user,
** splits it into digits
** and prints them.
*/

// Time Complexity = O(N)
// Space Complexity = O(1)

#include <iostream>

int main()
{
    int num, digit;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    std::cout << "Digits in " << num << " are ";
    while (num != 0) {
        digit = num % 10;
        num = num / 10;
        std::cout << digit << " ";
    }
        
    return 0;
}
