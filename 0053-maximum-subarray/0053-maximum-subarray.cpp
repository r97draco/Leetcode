class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res= nums[0], gmx = res;

        for(int i=1; i<nums.size(); i++){
            res = max(nums[i], nums[i]+res);
            gmx = max(gmx, res);
        }
        return gmx;
    }
};