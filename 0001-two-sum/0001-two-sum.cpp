class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hmap;
        vector<int> res{0,0};
        for(int i=0; i< nums.size(); i++){
            auto k= hmap.find(target-nums[i]);
            if(k!=hmap.end()){
                res[0]=i;
                res[1]=k->second;
                break;
            }
            hmap.insert({nums[i],i});
        }
        return res;
    }
};