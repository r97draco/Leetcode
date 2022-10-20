class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans="";
        int sz= s.size()-1;
        while(s[sz]==' ')sz--;
        for(int i=sz; i>=0; i--){
            if(s[i]==' '){
                break;
            }
            ans+=s[i];
        }
        // reverse(ans.begin(),ans.end());
        return ans.size();
    }
};