class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        //XOR 
        for(auto i: nums){
            ans^=i;
        }
        return ans;
    }
};