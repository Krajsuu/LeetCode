class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> h;
        for(int i = 0; i<nums1.size(); i++){
            int p = nums1[i], j = 0;
            while(nums2[j] != p)j++;
            int k = j+1;
            while(k < nums2.size()){
                if(nums2[k] <= nums2[j])k++;
                else break;
            }
            if(k == nums2.size())h.push_back(-1);
            else h.push_back(nums2[k]);
        }
        return h;
    }
};