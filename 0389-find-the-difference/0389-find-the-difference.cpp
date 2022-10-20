class Solution {
public:
    char findTheDifference(string s, string t) {
        int sums=0, sumt=0;
        for(auto &i : s){
            sums+=i;
        }
        for(auto &i : t){
            sumt+=i;
        }
        return char(sumt-sums);
    }
};