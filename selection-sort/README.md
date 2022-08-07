# Selection sort

### Description
Find the smallest unsorted element and add it to the end of the sorted list(at the beginning of array).

### Time complexity
`O(n^2)` - Worst-case scenario: We have to iterate over each of the *n* elements of the array (to find the smallest unsorted element) and we must repeat the process *n* times, since only one element gets sorted on each pass. 

`O(n^2)` - Best-case scenario: There’s no way to guarantee the array is sorted until we go through this process for all the elements.

### Space complexity
`O(1)` - It doesn't matter if we are using 10, 100 or 10000 elements. We have only one `temp` variable to store swaped elements. 