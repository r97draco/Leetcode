class Solution {
public:
    int findMin(vector<int>& nums) {
        int sz = nums.size(), l = 0, r = sz-1;
        int res= nums[0];
        while(l<=r){
            int m = l + (r-l)/2;
            res = min(res, nums[m]);
            if(nums[l]<=nums[m]){
                res = min(res, nums[l]);
                l = m+1;
            }else{
                r = m-1;
            }
            
        }
            return res;
        }
    };
