class Solution {
public:
    int solve(int n, int a = 1, int b = 2) {
        if (n == 1)
            return a;
        if(n == 2)
        return b;
        return solve(n - 1, b, a + b);
    }
    int climbStairs(int n) {
        return solve(n); 
    }

};