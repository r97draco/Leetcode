class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx= 100001, mn = prices[0];
        int gmax = 0;
        for(auto i: prices){
            mn = min(mn, i);
            gmax = max(gmax, i- mn);
        }
        return gmax;
    }
};