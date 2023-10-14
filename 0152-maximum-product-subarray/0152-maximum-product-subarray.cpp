class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sz= nums.size(), maxEndHere= nums[0], maxYet = nums[0], minEndHere= nums[0];

        for(int i=1; i<sz; i++){
        if(nums[i]<0)swap(maxEndHere, minEndHere);
        maxEndHere = max(nums[i], maxEndHere * nums[i]);
        minEndHere = min(nums[i], minEndHere * nums[i]);
        maxYet = max(maxYet, maxEndHere);
        }
        return maxYet;
    }
};