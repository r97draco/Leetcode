class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hmap;
        vector<int> res;
        
        for(int i=0; i<nums.size(); i++){
            int rem= target-nums[i];
            if(hmap.find(rem)!=hmap.end()){
                res.push_back(i);
                res.push_back(hmap[rem]);
                break;
            }
            hmap.insert({nums[i],i});
        }
        return res;
    }
};