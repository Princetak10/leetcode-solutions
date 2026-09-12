class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
         sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.back() - nums.front();
        while (l < r) {
            int mid = l + (r - l) / 2;
            int cnt = 0;
            for (int i = 0, j = 0; i < nums.size(); i++) {
                while (nums[i] - nums[j] > mid)
                    j++;
                cnt += i - j;
            }
            if (cnt >= k)
                r = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};