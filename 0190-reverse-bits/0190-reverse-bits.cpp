class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        for(int i=0; i<32; i++){
            int x = n&1;
            res = res<<1;
            n=n>>1;
            res = res|(x);
            
        }
        return res;
    }
};