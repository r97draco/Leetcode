class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(auto i: s){
            // if(('a'<= i && 'z'>=i) || ('A'<= i && 'Z'>=i)){
            if(isalnum(i)){
                ss+=tolower(i);
            }
        }
        cout<<ss;
        int l=0, h=ss.size()-1;
        while(l<=h){
            if(ss[l++]!=ss[h--]) return false;
        }
        return true;
    }
};