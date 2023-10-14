class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(auto i: nums){
            auto sizeBefore = set.size();
            set.insert(i);
            if (sizeBefore == set.size()){
                return 1;
            }
        }
        return 0;
    }
};