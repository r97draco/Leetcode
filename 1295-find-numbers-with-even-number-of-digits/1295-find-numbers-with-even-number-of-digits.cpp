class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(auto i: nums){
            if((i>9 && i<100) || (i>999 && i<10000) || (i== 100000))
                res++;
        }
        return res;
    }
};