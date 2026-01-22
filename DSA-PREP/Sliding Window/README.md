### Minimum Window Substring (Sliding Window)

Approach:
- Used sliding window with two pointers
- Maintained a frequency map of required characters
- Expanded the window using the right pointer
- Shrunk the window while all required characters were matched
- Tracked the minimum valid window length

Time Complexity: O(n)  
Space Complexity: O(1) (constant alphabet size)
