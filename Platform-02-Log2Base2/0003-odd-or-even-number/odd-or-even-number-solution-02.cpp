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
        std::cout << "Even" << std::endl;
    else
        std::cout << "Odd" << std::endl;
        
    return 0;
}
