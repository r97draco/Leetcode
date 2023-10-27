class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
        vector<int> dp (s.size(), -1);
        return check(s, wordSet, 0, dp);
    }

    bool check(string s,unordered_set<string> & wordSet, int start,vector<int>& dp){
        if( start >= s.size()) return true;
        if( dp[start] != -1) return dp[start];

        for(int i= start +1 ; i<= s.size(); i++){
            if (wordSet.count(s.substr(start, i - start)) && check(s, wordSet, i, dp)) {
                dp[start] = 1;
                return dp[start];
            }
        }
        dp[start]=0;
        return dp[start];
    }
};