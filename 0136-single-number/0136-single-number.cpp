class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> st;
        int ans =0;
        for(auto i: nums){
            st.insert(i);
            ans^=i;
        }
        return ans;
    }
};