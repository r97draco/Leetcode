class Solution {
public:
    bool checkIfPangram(string sentence) {
      set<char> alph;
        for(auto i: sentence){
            alph.insert(i);
        }
    return alph.size()==26;
    }
    
};