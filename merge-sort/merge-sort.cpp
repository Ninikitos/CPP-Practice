#include <iostream>

void merge(int start, int mid, int end, int array[]);
void merge_sort(int start, int end, int array[]);

int main()
{
    int array[10] = {2, 1, 66, 32, 21, 0, 99, 82, 7, 15};
    std::cout << "Before merge sort: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    merge_sort(0, 9, array);

    std::cout << "After merge sort: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
    
}

void merge(int start, int mid, int end, int array[])
{
    // Set bounds for two(left and right) subArrays
    int subArrayOneSize = mid - start + 1;
    int subArrayTwoSize = end - mid;

    // Initialize arrays with a set size;
    int leftArray[subArrayOneSize];
    int rightArray[subArrayTwoSize];

    // Take ints from array and past into left/right arrays
    for (int i = 0; i < subArrayOneSize; i++)
    {
        leftArray[i] = array[start + i];
    }

    for (int j = 0; j < subArrayTwoSize; j++)
    {
        rightArray[j] = array[mid + 1 + j];
    }
    
    // Initialize indexes of left and right arrays
    int indexOfSubArrayOne = 0;
    int indexOfSubArrayTwo = 0;

    // Initialize index of merged array
    int indexOfMergedArray = start;

    // Depeding on which value is bigger merge numbers in to array
    while (indexOfSubArrayOne < subArrayOneSize && 
            indexOfSubArrayTwo < subArrayTwoSize)
    {
        if(leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    // If left has 2 int and right only one, merge right as is
    while (indexOfSubArrayOne < subArrayOneSize)
    {
        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    while (indexOfSubArrayTwo < subArrayTwoSize)
    {
        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }

}

void merge_sort(int start, int end, int array[])
{
    if(start < end)
    {
        int mid = start + (end - start) / 2;
        merge_sort(start, mid, array);
        merge_sort(mid + 1, end, array);
        merge(start, mid, end, array);
    }
    else 
    {
        return;
    }
}