#include <iostream>

int main()
{
    int numbers[] = {2, 1, 66, 32, 21, 0, 99, 82, 7, 15};
    int arr_length = 10;

    for (int i = 0; i < arr_length - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr_length; j++)
        {
            if(numbers[min] > numbers[j])
            {
                min = j;
            }
        }

        int temp = numbers[i];
        numbers[i] = numbers[min];
        numbers[min] = temp; 

        for(int i = 0; i < arr_length; i++)
        {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
    }
}