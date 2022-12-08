class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx= nums[0], gmx=nums[0];
        for(int i=1; i<nums.size(); i++){
            mx=max(nums[i], nums[i]+mx);
            gmx= max(mx,gmx);
        }
        return gmx;
    }
};