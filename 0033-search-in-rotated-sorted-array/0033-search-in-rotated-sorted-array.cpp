class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz= nums.size(), l = 0, r= sz-1, res=-1;
        
        while(l<=r){
            int m = (r-l)/2 + l;
            // double num = (nums[m] < nums[0]) == (target < nums[0])
            //        ? nums[m]
            //        : target < nums[0] ? -INFINITY : INFINITY;
            // if (num < target)
            //     l = m + 1;
            // else if (num > target)
            //     r = m - 1;
            // else
            //     return m;

            if(target == nums[m])return m;

            // Left sorted part
            if(nums[l]<= nums[m]){
                if(target> nums[m] || target<nums[l])
                    l=m+1;
                else 
                    r=m-1;
            }
            // Right sorted part
            else{
                if(target< nums[m] || target>nums[r])
                    r=m-1;
                else 
                    l=m+1;
            }
        }
        return -1;
    }
};