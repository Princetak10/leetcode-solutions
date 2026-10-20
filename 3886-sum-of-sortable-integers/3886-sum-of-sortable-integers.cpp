class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();

        auto valid = [&](int k) -> bool {
            int previousMax = 0;
            for (int start = 0; start < n; start += k) {
                int end = start + k;
                int lo = nums[start], hi = nums[start];
                int drops = 0;

                for (int i = start + 1; i < end; ++i) {
                    lo = min(lo, nums[i]);
                    hi = max(hi, nums[i]);
                    if (nums[i - 1] > nums[i]) ++drops;
                    if (drops > 1) return false;
                }

                if (nums[end - 1] > nums[start]) ++drops;
                if (drops > 1 || previousMax > lo) return false;
                previousMax = hi;
            }
            return true;
        };

        int answer = 0;
        for (int d = 1; d <= n / d; ++d) {
            if (n % d != 0) continue;
            if (valid(d)) answer += d;
            int other = n / d;
            if (other != d && valid(other)) answer += other;
        }
        return answer;
    }
};