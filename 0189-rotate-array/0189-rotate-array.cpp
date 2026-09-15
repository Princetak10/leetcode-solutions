class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //Brute force code:-
        // int n = nums.size();
        // for (int j = 0; j < k; j++) {
        //     int last = nums[n - 1];
        //     for (int i = n - 1; i >= 1; i--) {
        //         nums[i] = nums[i - 1];
        //     }
        //     nums[0] = last;
        // }
        //optimization:-
        k %= nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};