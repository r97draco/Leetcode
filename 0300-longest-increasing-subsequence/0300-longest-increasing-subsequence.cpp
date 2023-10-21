class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int sz= nums.size();
        vector<int> dp(sz+1, 1);
        for(int i=0; i<sz; i++){
            for(int j=0; j<i; j++){
                if( nums[i]> nums[j] && dp[i]<dp[j]+1 )
                 dp[i]=dp[j]+1;
            }
        }
        // for(auto i: dp){
        //     cout<<i<<"-";
        // }
        sort(dp.begin(), dp.end());
        return dp.back();
        return *max_element(dp.begin(), dp.end());
    }
};