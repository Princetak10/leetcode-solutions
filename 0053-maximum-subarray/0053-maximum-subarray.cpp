class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxarr = nums[0];
        int cursum = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
           cursum = max(nums[i], cursum+nums[i]);
           maxarr = max(maxarr,cursum);
            
        }
        return maxarr;
    }
};