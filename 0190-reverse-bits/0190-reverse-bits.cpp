class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(uint32_t i=0; i< 32; i++){
            uint32_t tmp = n&1;
            n= n>>1;
            res= res<<1;
            res = res | tmp;
        }
        return res;
    }
};