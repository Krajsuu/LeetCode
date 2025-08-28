class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int T[201] = {0};
        int counter = 0;
        for(int i = 0; i < nums.size();){
            if(T[nums[i]+100] == 0){
                T[nums[i]+100] = 1;
                counter++;
                i++;
            } else {
                nums.erase(nums.begin()+i);
            }
        }
        return counter;
    }
};