#include <iostream>

int main()
{                     
    int numbers[] = {66, 32, 1, 3, 2, 21, 0, 99, 0, 7, 15};
    int arr_length = 10;

    for (int i = 0; i < arr_length - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr_length; j++)
        {
            if(numbers[j] < numbers[min])
            {
                min = j;
            }
        } 

        int temp = numbers[min];
        numbers[min] = numbers[i];
        numbers[i] = temp;

        for(int i = 0; i < arr_length; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
    }
}