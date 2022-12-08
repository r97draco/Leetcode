class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz= nums.size();
        unordered_map<int,int> hash;
        for(auto i: nums){
            hash[i]++;
            if(hash[i]> sz/2)return i;
        }
        return 0;
    }
};