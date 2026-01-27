//Leetcode Solution
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen = 0;
        int n = nums.size();
        int i = 0;
        int count = 0;  
        while(i < n){
            if(nums[i] == 1){
                count++;
                if(i == n - 1){
                    maxlen = max(count,maxlen);
                }
                i++;
            }
            else if (nums[i] == 0){
                maxlen = max(count,maxlen);
                count = 0;
                i++;
            }
        }
        return maxlen;
    }
};
