class Solution {
public:
    int climbStairs(int n) {
       if(n == 1) return 1;
       if(n == 2) return 2;
       int last2 = 1;
       int last1 = 2;
       
       for(int i = 3; i <= n; i++){
            int newN = last1 + last2;
            last2 = last1;
            last1 = newN;
       }
       return last1;
    }
};