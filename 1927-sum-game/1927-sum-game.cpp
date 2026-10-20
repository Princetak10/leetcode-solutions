class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int diff = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                if (num[i] == '?') {
                    count++;
                } else {
                    diff += num[i] - '0';
                }
            } else {
                if (num[i] == '?') {
                    count--;
                } else {
                    diff -= num[i] - '0';
                }
            }
        }
        if (count % 2 != 0) {
            return true;
        }
        return diff != -(count / 2) * 9;
    }
};