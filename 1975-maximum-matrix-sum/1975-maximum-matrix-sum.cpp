class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int negative = 0;
        int mini = INT_MAX;
        int n = matrix.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] < 0) {
                    negative++;
                }
                sum += abs(matrix[i][j]);
                mini = min(mini, abs(matrix[i][j]));
            }
        }
        if(negative % 2 == 1) {
            sum -= 2LL * mini;
        }
        return sum;
    }
};