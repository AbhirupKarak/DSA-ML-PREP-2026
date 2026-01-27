#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    int find_subarray(int nums[], int n, int k)
    {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int sum = 0;
        while (right < n)
        {
            sum += nums[right];

            while (sum > k)
            {
                sum -= nums[left];
                left++;
            }
            if (sum == k)
            {
                maxlen = max(maxlen, right - left + 1);
            }
            right++;
        }
        return maxlen;
    }
};

int main()
{
    int nums[3] = {-1, 1, 1};
    int n = 3;
    int k = 1;
    Solution obj;
    int sol = obj.find_subarray(nums, n, k);
    cout << sol;
    return 0;
}
