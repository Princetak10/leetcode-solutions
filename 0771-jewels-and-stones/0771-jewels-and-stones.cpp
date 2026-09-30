class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int freq[128] = {0};
        for(char ch : stones) {
            freq[ch]++;
        }
        int count = 0;
        for(char ch : jewels) {
            count += freq[ch];
        }
        return count;
    }
};