class Solution {
public:
    int longestSubsequence(string s, int k) {
      long long value = 0;
        long long power = 1;
        int ans = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            // 0 ko hamesha le sakte hain
            if (s[i] == '0') {
                ans++;
            }
            // 1 tabhi lenge jab value k se exceed na kare
            else if (value + power <= k) {
                value += power;
                ans++;
            }
            // next binary position
            if (power <= k)
                power *= 2;
        }
        return ans;  
    }
};