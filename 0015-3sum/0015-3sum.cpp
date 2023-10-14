class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res ;
        int sz = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<sz-2; i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            if(nums[i]>0)return res;
            int l=i+1, r = sz-1;
            while(l<r){
                if(nums[i] + nums[l] + nums[r] == 0){
                    vector<int> tmp{nums[i],nums[l],nums[r]};
                    res.push_back(tmp);
                    l++;
                    while( l<sz && nums[l-1] == nums[l] )l++;
                }else if(nums[i] + nums[l] + nums[r] < 0){
                    l++;
                }
                else {
                    r--;
                }
            }
        }
        return res;
    }
};