class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        int x =0;
        for(auto i: nums){
            res = (i^res);
            res ^= x++;
        }
        return res;
    }
};