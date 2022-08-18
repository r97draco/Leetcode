class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int gmax=0, mn=INT_MAX;
        // for(int i=0; i<prices.size()-1;i++){
        //    int mn= prices[i];
        //    int mx= *max_element(prices.begin()+i, prices.end());
        //    bs=mx-mn;
        //    gmax=max(bs,gmax);
        // }
        for(auto i: prices){
            mn= min(i, mn);
            gmax= max(gmax,i-mn);
        }
        return gmax;
    }
};