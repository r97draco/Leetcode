class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        vector<vector<int>> result;
        int sz=n.size();
        sort(n.begin(), n.end());
        for(int i=0; i<sz; i++){
            if(i>0 && n[i-1]==n[i]){
                continue;
            }
            if(n[i]>0)return result;
            for(int j=i+1, k=sz-1; j<k;){
                if(n[i]+n[j]+n[k] == 0){
                    vector<int> res={n[i],n[j++],n[k]};
                    result.push_back(res);
                    while(n[j]==n[j-1] && j<k){
                    j++;
                    }
                }
                else if(n[i]+n[j]+n[k] < 0) j++;
                else k--;
            }
           
        }
        return result;
    }
};