class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> map;
        for(auto i: s){
            if(map.find(i)!= map.end()){
                return i;
            }else{
                map.insert(i);
            }
        }
        return true;
    }
};