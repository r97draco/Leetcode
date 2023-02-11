class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz= nums.size();
        vector<int> res(sz*2);
        for(int i=0; i<sz; i++){
            res[i]=nums[i];
            res[i+sz]=nums[i];
        }
        return res;
    }
};