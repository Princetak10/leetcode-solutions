class Solution {
public:
    int twoEggDrop(int n) {
        int k = 0;
        int floors = 0;
        while (floors < n) {
            k++;
            floors += k;
        }
        return k;
    }
};