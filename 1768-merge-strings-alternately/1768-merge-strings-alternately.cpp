class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int m=word1.size(), n=word2.size();
        int i=0, j=0;
        for(; i<m && j<n ; i++, j++){
            s+=word1[i];
            s+=word2[j];
        }
        if(i!=m){
            for(; i<m; i++)s+=word1[i];
        }
        if(j!=n){
            for(; j<n; j++)s+=word2[j];
        }
        return s;
    }
};