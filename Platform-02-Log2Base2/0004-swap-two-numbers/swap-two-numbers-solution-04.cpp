/*
** Reads two numbers from user,
** swaps and then prints them.
*/

// Do not use any extra variable

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "Swapped numbers are " << a << " and " << b << std::endl;
        
    return 0;
}
