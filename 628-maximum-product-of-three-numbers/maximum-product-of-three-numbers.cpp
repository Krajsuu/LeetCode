class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maks[3] = {INT_MIN,INT_MIN,INT_MIN};
        int mini[2] = {INT_MAX,INT_MAX};
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] > maks[0]) { 
                maks[2] = maks[1];
                maks[1] = maks[0];
                maks[0] = nums[i];
            }
            else if (nums[i] > maks[1]) { 
                maks[2] = maks[1];
                maks[1] = nums[i];
            }
            else if (nums[i] > maks[2]) { 
                maks[2] =  nums[i];
            }
            if (nums[i] < mini[0]) { 
                mini[1] = mini[0];
                mini[0] = nums[i];
            }
            else if (nums[i] < mini[1]) { 
                mini[1] = nums[i];
            }
        }
        return max( maks[2] * maks[1] * maks[0] , mini[1] * mini[0] * maks[0]);
    }
};