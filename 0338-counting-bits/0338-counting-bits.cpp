class Solution {
public:
    int hammingWeight(int n) {
        int cn= 0;
        while(n){
            cn+= (n&1);
            n = n>>1;
        }
        return cn;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        int i=0;
        while(i!= n+1){
            res.push_back(hammingWeight(i));
            i++;
        }
        return res;
    }
};