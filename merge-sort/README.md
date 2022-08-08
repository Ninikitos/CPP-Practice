# Merge sort

### Description
The Merge Sort algorithm is a sorting algorithm that is considered an example of the divide and conquer strategy. So, in this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner. We can think of it as a recursive algorithm that continuously splits the array in half until it cannot be further divided. This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion. If the array has multiple elements, we split the array into halves and recursively invoke the merge sort on each of the halves. Finally, when both the halves are sorted, the merge operation is applied. Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.

### Time complexity
`O(nLogn)` -  in all 3 cases (worst, average and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.

### Space complexity
`O(n)` - The merge sort algorithm requires an additional memory space of 0(n) for the temporary array.