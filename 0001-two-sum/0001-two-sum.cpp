class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for(int i=0; i<nums.size(); i++){
            auto k = mp.find(target-nums[i]);
            if(k != mp.end()){
                return vector<int>{i, k->second};
            }
            mp[nums[i]]=i;
        }
        return vector<int> {-1,-1};
    }
};