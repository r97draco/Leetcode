class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int lmx=0, gmx=0;
        unordered_set<int> n;
        for(auto i: nums){
            n.insert(i);
        }
        for(auto i: nums){
            if(n.find(i-1)==n.end()){
                int l=0;
                while(n.find(i+l)!=n.end())
                    l++;
                gmx=max(l,gmx);
            }
        }
        return gmx;
    }
};