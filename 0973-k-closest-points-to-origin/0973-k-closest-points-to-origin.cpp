class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<double, vector<int>> hash;
        vector<vector<int>> res;
        for(auto i: points){
            double d= sqrt( pow(i[0],2)+ pow(i[1],2) );
            hash.insert({d, i});
        }
        int c=0;
        for(auto i: hash){
            if(c++>=k)break;
            res.push_back(i.second);
        }
        return res;
    }
};