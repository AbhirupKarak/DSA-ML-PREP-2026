class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        int n = nums.size();
        vector<int> num(n);
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                num[count0] = nums[i];
                count0++;
                count1++;
                count2++;
            }
        }

        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                num[count1] = nums[i];
                count1++;
                count2++;
            }
        }

        for(int i = 0; i < n; i++){
            if(nums[i] == 2){
                num[count2] = nums[i];
                count2++;
            }
        }
        for(int i = 0; i < n; i++){
            nums[i] = num[i];
        }
    }
};
