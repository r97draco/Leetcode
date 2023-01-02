class Solution {
public:
    string defangIPaddr(string address) {
        string newAdd = "";
        for(auto i: address){
            if(i=='.'){
                newAdd+="[.]";
            }
            else {
                newAdd.push_back(i);
            }
        }
        return newAdd;
    }
};