class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cn= 0;
        while(n){
            cn+= (n&1);
            n = n>>1;
        }
        return cn;
    }
};