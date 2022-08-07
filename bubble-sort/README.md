# Bubble search

### Description
Bubbles up large numbers to the right side of the array. For this we need to compare every two numbers of the unsorted array pushing the largest numbers to the right.

### Time complexity 
`O(n^2)` - Worst-case scenario: The array is in reverse order; we have to “bubble” each of the *n* elements all the way across the array, and since we can only fully bubble one element into position per pass, we must do this *n* times O(n2) where *n* is a number of elements in the array.

`O(n)` - Best-case scenario: The array is already sorted and we make no swaps on the first pass O(n). Where *n* is a number of elements in the array.

### Space complexity
`O(1)` - It doesn't matter if we are using 10, 100 or 10000 elements. We have only one `temp` variable to store swaped elements. 