class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
         int n = nums.size();
        long long totalPairs = 1LL * n * (n - 1) / 2;
        long long goodPairs = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int key = i - nums[i];
            goodPairs += mp[key];
            mp[key]++;
        }
        return totalPairs - goodPairs;
    }
};