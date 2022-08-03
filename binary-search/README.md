# Binary search

### Time complexity 
`O(log n)` - (where n is array length),
because we have to divide array until element is found.
Best case scenario is Omega(1)(constant)

### Space complexity
`O(1)` - because we have only 3 variable 
that we instantiated and we are not creating a new one's.

> Iteration in Binary Search terminates after `k` iterations. 
1. Iteration 
Array length is = `n`
2. Iteration
Array length is = `n/2`
3. Iteration 
Array length is = `(n/2) / 2 = n/2^2`
4. Iteration
Array length is = `((n/2) / 2) / 2 = n/2^3`
We are always dividing array on half

After all iteration Array = `n/2^k;`

After `k` iterations, the length of the array becomes `1`.
Therefore, Length of array = `n/2^k = 1;`
Therefore, `n = 2^k` - How many times we need to divide? `k` times
Applying log function log `n = 1`, we can disregard `1`. 

`m = (L + R) / 2;` - this formula is only good with small arrays,
because if value of formula will go over int capacity(2^32) we 
can face overflow.

`m = L + ((R - L) / 2);` - this formula works perfect with lagre arrays only if R and L non negative numbers that feat into some `type`
> For example `int(32 bit);`

And also if there difference will feat into some type, assuming `R > L;`