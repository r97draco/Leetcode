class Solution {
public:
    int twoEggDrop(int n) {
        int i=n, x=1,
        count = 0;
        while(i- x > 0){
            i-=x;
            x++;
        }
        // cout<<x<<" "<<i;
        return x;
    }
};