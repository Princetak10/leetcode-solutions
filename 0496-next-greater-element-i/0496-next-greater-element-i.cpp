class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums2.size();
        int n2 = nums1.size();
        vector<int> ans;
        for(int i = 0; i < n2; i++) {
            int j = 0;
            while(j < n1 && nums2[j] != nums1[i]) {
                j++;
            }
            int greater = -1;
            for(int k = j + 1; k < n1; k++) {
                if(nums2[k] > nums1[i]) {
                    greater = nums2[k];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};