class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        if(n == 4 ) return false;
        return isHappy(Square(n));
    }
    int Square(int n){
        if(n == 0) return 0;
        int digit = n % 10;
        return digit * digit + Square(n /10);
    }
};