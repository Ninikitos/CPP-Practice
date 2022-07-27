#include <iostream>
// Time complexity: O(n) because in worst case we need to
// go through each element.
// Omega will be: because we will O(1) because we will check only
// first number, and if we are lucky, it's our guess.

// Space complexity: O(1) because we don't create any variables
// inside the loop.

int main(void)
{
    int numbers[] = {30, 2, 99, 76, 3, 1, 134};
    int guess = 134;
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i <= length - 1; i++) 
    {
        if(guess == numbers[i])
        {
            std::cout << "Found" << std::endl;
            return 0;
        }
    }
    std::cout << "Not Found" << std::endl;
}