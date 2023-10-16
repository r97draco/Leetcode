class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEndHere=nums[0], minEndHere=nums[0], maxYet=maxEndHere;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<0){
                swap(maxEndHere, minEndHere);
            }
            minEndHere = min(nums[i], nums[i]*minEndHere);
            maxEndHere = max(nums[i], nums[i]*maxEndHere);
            maxYet = max(maxYet, maxEndHere);
        }
        return maxYet;
    }
};