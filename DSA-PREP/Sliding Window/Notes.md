Sliding Window Technique is a method used to solve problems that involve subarray or substring or window.
<img width="450" height="224" alt="image" src="https://github.com/user-attachments/assets/6d1caef3-0097-4418-a67f-900ec384076c" />

Instead of repeatedly iterating over the same elements, the sliding window maintains a range (or “window”) that moves step-by-step through the data, updating results incrementally.
The main idea is to use the results of previous window to do computations for the next window.
Commonly used for problems like finding subarrays with a specific sum, finding the longest substring with unique characters, or solving problems that require a fixed-size window to process elements efficiently.
We compute the sum of the first k elements out of n terms using a linear loop and store the sum in variable window_sum.
Then we will traverse linearly over the array till it reaches the end and simultaneously keep track of the maximum sum.
To get the current sum of a block of k elements just subtract the first element from the previous block and add the last element of the current block.
