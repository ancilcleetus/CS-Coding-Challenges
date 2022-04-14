/*
** Reads two numbers from user,
** swaps and then prints them.
*/

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    
    int temp = a;
    a = b;
    b = temp;

    std::cout << "Swapped numbers are " << a << " and " << b << std::endl;
        
    return 0;
}
