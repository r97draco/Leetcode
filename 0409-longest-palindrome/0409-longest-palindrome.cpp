class Solution {
public:
    int longestPalindrome(string s) {
       map<char, int> db;
        for(auto i: s){
            db[i]++;
        }
        int carry=0, sum=0;
        for(auto i: db){
            if(!carry && (i.second %2 == 1)) carry=1;
            sum += ( i.second / 2) * 2;
        }
        
        return sum+carry;
    }
};