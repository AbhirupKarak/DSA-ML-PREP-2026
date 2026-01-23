# Sliding Window

## Core Idea
Maintain a window [left, right] and keep moving right pointer.
Move left pointer only when condition is violated / we can shrink.

## When to use
- Given array/string + "longest / maximum / minimum subarray / substring that satisfies …"
- "at most k …", "contains all …", "longest without repeating …"

## Classic Problems

1. Longest Substring Without Repeating Characters
   Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
   Code: https://github.com/AbhirupKarak/DSA-ML-PREP-2026/blob/main/DSA-PREP/Sliding%20Window/LongestSubstringWithoutRepeatingCharacters.cpp
   Notes: used set + left pointer when duplicate found

2. Maximum Points obtained from cards
   Code: https://github.com/AbhirupKarak/DSA-ML-PREP-2026/blob/main/DSA-PREP/Sliding%20Window/MaximumPointsYouCanObtainFromCards.cpp
   Key insight: (right - left + 1) - max_freq <= k

3. Minimum Window Substring (hard but very important)
   Code: https://github.com/AbhirupKarak/DSA-ML-PREP-2026/blob/main/DSA-PREP/Sliding%20Window/MinimumWindowSubstring.cpp

4. Maximum Consecutive 1's
   Code: https://github.com/AbhirupKarak/DSA-ML-PREP-2026/blob/main/DSA-PREP/Sliding%20Window/MaximumConsecutive1's.cpp

