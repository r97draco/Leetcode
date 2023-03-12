class Solution {
    vector<vector<int>> result;
    vector<int> cand;
    int targ;
    int sz;
public:
    void dfs(int i, vector<int> cur, int total){
        if(total == targ){
            result.push_back(cur);
            return ;
        }
        if(i >= sz || i<0 || total > targ){
            return ;
        }
        cur.push_back(cand[i]);
        dfs(i, cur, total + cand[i]);
        cur.pop_back();
        dfs(i+1, cur, total);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        targ= target;
        cand = candidates;
        sz= candidates.size();
        vector<int> tmp;
        dfs(0, tmp, 0);
        return result;
    }
};