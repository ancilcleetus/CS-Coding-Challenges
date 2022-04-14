/*
** Reads a number from user and prints
** whether it is Positive or Negative.
*/

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (num > 0)
        printf("Positive");
    else if (num < 0)
        printf("Negative");
    else
        printf("Neither positive nor negative");
        
    return 0;
}
