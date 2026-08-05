## 800:
### 1896A: Jagged Swaps
if an array begins with 1, it can be sorted. else it can't. because the first element can never be swapped with anything.

## 900:
### 1828B: Permutation Swap
Since every element has to reach position a[i] from position i, thus the answer will be gcd of all (a[i] - i)

### 1696B: NIT Destroys the Universe
Count number of non zero segments. If number of non zero segments == 0, ans is 0; if number of non zero segments == 1, ans is 1. else answer is 2. answer can never be greater than 2, because if number of non zero segments is greater than 2, just find the maximum missing element in the array, change every element to the mex of the entire array, and then change the entire array to 0, as the mex of the modified array would also be 0.