class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int index = 0;
        while(index<=right){
            if(nums[index] == 2){
                swap(nums[index],nums[right]);
                right--;
            }
            else if(nums[index] == 1){
                index++;
            }else{
                swap(nums[left],nums[index]);
                left++;
                index++;
            }
        }
    }
};