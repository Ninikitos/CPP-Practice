#include <iostream>
#include <cmath>

int main()
{
    int target, start, middle, end;
    int numbers[] = {4, 15, 23, 56, 67, 87, 88, 100, 120};

    target = 120;
    start = 0;
    end = sizeof(numbers) / sizeof(numbers[0]) - 1;
    
    while (start <= end)
    {
        middle = start + (end - start) / 2;

        if(numbers[middle] == target)
        {
            std::cout << "Found on index: " << middle 
            << std::endl;
            return 0;
        }
        else if (numbers[middle] < target) 
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    std::cout << "Not found" << std::endl;
    return 1;
}