class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int mx = *max_element(candies.begin(), candies.end());
        cout<<mx;
        for(auto i: candies){
            if( i+ extraCandies >= mx )
                res.push_back(1);
            else 
                res.push_back(0);
        }
        return res;
    }
};