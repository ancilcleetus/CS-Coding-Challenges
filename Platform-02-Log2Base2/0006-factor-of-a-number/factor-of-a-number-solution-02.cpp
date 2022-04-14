/*
** Reads two number N, X from user,
** finds whether X is a factor of N
** and then prints the finding.
*/

// Time Complexity = O(1)
// Space Complexity = O(1)

#include <iostream>

int main()
{
    int N, X;
    std::cout << "Enter numbers: ";
    std::cin >> N >> X;
    
    if (N % X == 0)
        std::cout << X << " is a factor of " << N <<std::endl;
    else
        std::cout << X << " is not a factor of " << N <<std::endl;
        
    return 0;
}
