//LEETCODE SOLUTION

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        int count = k; // Manages '0' budget
        int maxlen = 0;
        for(r; r < n; r++){
            if(nums[r] == 0){
                count--; //Consume budget when I see a zero
            }
            while(count < 0){
                if(nums[l] == 0) count++; //increase budget if removed element was zero
                l++; //increment l
            }
            maxlen = max(maxlen, r-l+1); //Update maxlen
        }
        return maxlen;
    }
};
