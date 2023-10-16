class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int > mp;
        for(int i=0 ; i<nums.size(); i++ ){
            auto it = mp.find(target- nums[i]);
            if(it != mp.end()){
                vector<int> tmp{i, it->second};
                return tmp;
            }
            mp[nums[i]]=i;
        }
        return vector<int>{-1,-1};
    }
};