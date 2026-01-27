class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
                arr[i] = nums[(n - k + i)%n];
        }
        for(int i = 0; i < n; i++){
            nums[i] = arr[i];
        }
    }   
};
