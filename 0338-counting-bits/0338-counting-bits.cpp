class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> result;
        for(int i=0; i<=n; i++){
            bitset<32> c= i;
            result.push_back(c.count());
        }
        return result;
    }
};