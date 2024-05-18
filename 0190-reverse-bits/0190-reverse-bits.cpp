class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
//         uint32_t reversed = 0;
//         for(uint32_t i= 0; i<32; i++){
//             int bit = 0;
//             if((n & (1<<i)) !=0){
//                 bit =1;
//             }

//             // Shift reversed left to make space for the new bit
//             reversed <<= 1;

//             // Set the last bit of reversed to the current bit
//             reversed |= bit;
//         }
        bitset<32> x= n;
        string y = x.to_string();
        reverse(y.begin(), y.end());
        bitset<32> ans(y);
        
        return ans.to_ullong();
    }
};