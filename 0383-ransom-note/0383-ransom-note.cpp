class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> ransom_map, mag_map;
        for(auto i: ransomNote){
            ransom_map[i]++;
        }
        for(auto i: magazine){
            mag_map[i]++;
        }
        for(auto i: ransom_map){
            char s= i.first; int val= i.second;
            auto tmp=mag_map.find(s);
            if(tmp!= mag_map.end()){
                // auto tmp= mag_map[s];
                if(i.second> tmp->second)return false;
            }
            else return false;
        }
        return true;
    }
};