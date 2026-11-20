class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= abs(k); j++) {
                int idx = (i + (k > 0 ? j : -j) + n) % n;
                ans[i] += code[idx];
            }
        }
        return ans;
    }
};