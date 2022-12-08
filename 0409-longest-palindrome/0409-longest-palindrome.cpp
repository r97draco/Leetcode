class Solution {
public:
    int longestPalindrome(string s) {
       map<char, int> hash;
        for(auto i: s){
            hash[i]++;
        }
        
        int flag=0, res=0;
        for(auto i: hash){
          if(i.second%2 == 0)res+=i.second;
            else if(i.second % 2 == 1){
                flag=1;
                res+=( i.second - 1);
            }
        }
        if(flag)res++;
        return res;
    }
};