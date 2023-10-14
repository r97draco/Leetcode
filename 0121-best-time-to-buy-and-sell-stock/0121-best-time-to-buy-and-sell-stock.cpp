class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0], gmax = 0;
        for(auto i: prices){
            mn = min(mn, i);
            gmax = max(gmax, i- mn);
        }
        return gmax;
    }
};