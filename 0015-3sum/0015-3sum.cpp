class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        sort(n.begin(), n.end());
        vector<vector<int>> res;
        int l=0, sz= n.size(), r= sz-1, mid, target=0;
        for(int i = 0; i< sz-1; i++){
            if(i>0 && i< sz-2 && n[i]==n[i-1]) continue;
            for(l=i+1, r=sz-1; l<r; ){
                if(n[l]+n[r]+n[i]== target){
                    vector<int> ans={n[i],n[l],n[r]};
                    res.push_back(ans);
                    l++;
                    while(l<r && n[l]==n[l-1])l++;
                }
                else if(n[l]+n[r]+n[i] < target) l++;
                else r--;
            }
        }
        return res;
    }
};