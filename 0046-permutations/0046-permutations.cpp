class Solution {
public:
    void permute(int i, vector<int>& nums, vector<vector<int>> & res){
        if(i>= nums.size()){
            res.push_back(nums);
            return;
        }
        for(int b= i; b< nums.size(); b++){
            swap(nums[b], nums[i]);
            permute(i+1, nums, res);
            swap(nums[b], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        permute(0, nums, res);
        return res;
    }
};