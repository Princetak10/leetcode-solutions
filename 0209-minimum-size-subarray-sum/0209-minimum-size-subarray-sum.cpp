class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int mini = INT_MAX;
        int n = nums.size();
        for(int r = 0; r < n; r++){
            sum+=nums[r];
            while(sum >= target){
                mini = min(mini, r - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return mini == INT_MAX ? 0:mini;
    }
};