class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> dp;
        for(auto i: nums){
            dp[i]++;
        }
        auto mx=dp.begin();
        for(auto it=dp.begin(); it!=dp.end(); it++){
            if(it->second>mx->second){
                mx=it;
            }
        }
        return mx->first;
    }
};