class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int cnt[10] = {};
        for (int d : digits)
            cnt[d]++;
        int ans = 0;
        for (int num = 100; num <= 999; num++) {
            if (num % 2 != 0) continue;
            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;
            cnt[a]--;
            cnt[b]--;
            cnt[c]--;
            if (cnt[a] >= 0 && cnt[b] >= 0 && cnt[c] >= 0)
                ans++;
            cnt[a]++;
            cnt[b]++;
            cnt[c]++;
        }
        return ans;
    }
};