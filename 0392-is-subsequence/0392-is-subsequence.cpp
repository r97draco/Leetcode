class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m= s.size(), n=t.size();
        int i=0, j=0;
        for(auto k: t){
            if(s[i]==k)i++;
            if(i==m)return true;
        }
        return i==m;
    }
};