/*
** Reads a number N from user,
** finds the sum of natural numbers upto N
** and then prints the sum.
*/

// Time Complexity = O(N)
// Space Complexity = O(1)

#include <iostream>

int main()
{
    int N, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> N;
    
    for (int i = 1; i <= N; ++i)
        sum += i;

    std::cout << "Sum of natural numbers upto " << N << " is " << sum << std::endl;
        
    return 0;
}
