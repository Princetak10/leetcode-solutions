class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int freq[101] = {0};
        for (int x : nums1) {
            freq[x]++;
        }
        int ans2 = 0;
        for (int x : nums2) {
            if (freq[x] > 0) {
                ans2++;
            }
        }
        fill(freq, freq + 101, 0);
        for (int x : nums2) {
            freq[x]++;
        }
        int ans1 = 0;
        for (int x : nums1) {
            if (freq[x] > 0) {
                ans1++;
            }
        }
        return {ans1, ans2};
    }
};