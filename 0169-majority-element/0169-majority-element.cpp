class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candy = 0;
        int count = 0;
        for(int num: nums){
            if(count == 0){
                candy = num;
            }
            if(candy == num){
                count++;
            }else{
                count--;
            }
        }
        return candy;
    }
};