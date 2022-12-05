class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int gmax=0; int mx= prices[0];
        for(auto i: prices){
            mx= min(mx, i);
            gmax= max(gmax,i- mx);
        }
        return gmax;
    }
};