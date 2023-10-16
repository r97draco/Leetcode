class Solution {
public:
    int getSum(int a, int b) {
        while(b){
            int tmp = (unsigned int)(a&b)<<1;
            cout<<tmp<<"----"<<a;
            a =(a^b);
            b = tmp;
        }
        return a;
    }
};