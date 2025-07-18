class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums_combined;
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] > nums2[j]){
                nums_combined.push_back(nums2[j]);
                j++;
            }
            else {
                nums_combined.push_back(nums1[i]);
                i++;
            }
        }
        while(i < nums1.size()){
            nums_combined.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size()){
            nums_combined.push_back(nums2[j]);
            j++;
        }
        int position = nums_combined.size();
        cout<<position;
        if(position%2 == 0){
            position = position / 2;
            position--;
            return double(nums_combined[position] + nums_combined[position+1])/2;
        } else {
            position = (position/2)+1;
            position--;
            return double(nums_combined[position]);
        }

    }
};