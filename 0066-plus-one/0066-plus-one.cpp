class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         for(int i = digits.size() - 1; i >= 0; i--) {

            if(digits[i] < 9) {

                digits[i]++;

                return digits;

            }

            digits[i] = 0;

        }

        // Saare digits 9 the

        vector<int> ans;

        ans.push_back(1);

        for(int i = 0; i < digits.size(); i++) {

            ans.push_back(digits[i]);

        }

        return ans;
    }
};