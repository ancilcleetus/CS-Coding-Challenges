/*
** Reads a number N from user,
** finds the sum of natural numbers upto N
** and then prints the sum.
*/

// Time Complexity = O(1)
// Space Complexity = O(1)

#include <iostream>

int main()
{
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    
    int sum = N * (N+1) / 2;

    std::cout << "Sum of natural numbers upto " << N << " is " << sum << std::endl;
        
    return 0;
}
