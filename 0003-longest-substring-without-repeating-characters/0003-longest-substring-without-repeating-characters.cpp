class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int ans=0; set<char> db;
        int c=0;
        int gmax=0;
        int l=0, r= s.size()-1;
        for(r=0; r<s.size(); r++){
            if(db.find(s[r])==db.end()){
                db.insert(s[r]);
                gmax=max(gmax, r-l+1);
            }
            else{
                while(l!=r && s[r]!=s[l]){
                    db.erase(s[l++]);
                }
                db.erase(s[l++]);
                db.insert(s[r]);
                gmax= max(gmax, r-l+1);
            }
        }
        return gmax;
        // for(auto i: s){
        //     if(db.find(i)!= db.end()){
        //         db.clear();
        //         c=0;
        //     }else {
        //         db.insert(i);
        //         c++;
        //         gmax=max(c, gmax);
        //     }
        // }
        // return gmax;
    }
};