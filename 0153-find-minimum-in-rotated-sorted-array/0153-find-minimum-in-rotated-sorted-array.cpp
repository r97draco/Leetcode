class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, res= nums[0], r= nums.size()-1;
        while(l<=r){
            int mid= (r-l)/2 + l;
            res = min(res, nums[mid]);
            if(nums[mid] >= nums[l]){
                res = min(res, nums[l]);
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return res;
    }
};