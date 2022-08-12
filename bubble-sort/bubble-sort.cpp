#include <iostream>

// int main()
// {
//     int numbers[] = {2, 1, 66, 32, 21, 0, 99, 82, 7, 15};
//     int arr_length = 10;

//     for (int i = 0; i < arr_length; i++)
//     {
//         for (int j = 0; j < arr_length; j++)
//         {
//             std::cout << numbers[j] << " ";
//         }

//         std::cout << std::endl;
        
//         for (int k = 0; k < arr_length - 1; k++)
//         {
//             if(numbers[k] > numbers[k+1])
//             {
//                 int temp = numbers[k];
//                 numbers[k] = numbers[k+1];
//                 numbers[k+1] = temp;
//             }
//         }
//     }
// }


// Optimiation
// 1. We don't have to go and check already bubbled numbers. 
// That's why on innvers loop we are dynamically subtracting i.
// 2. Also if array is sorted and we don't need to do swapes.
// We have to exit looping.
int main()
{
    int numbers[] = {2, 1, 66, 32, 21, 0, 99, 82, 7, 15};
    int arr_length = 10;
    bool swaped = false;
    int i = 0;

    do
    {
        // printing sorted values
        for (int k = 0; k < arr_length; k++)
        {
            std::cout << numbers[k] << " ";
        }
        std::cout << std::endl;
        
        swaped = false;
        for (int j = 0; j < arr_length - 1 - i; j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                swaped = true;
            }
        }   
        i++;
    } while (swaped);
}