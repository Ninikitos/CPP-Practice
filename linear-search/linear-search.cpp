#include <iostream>

int main()
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