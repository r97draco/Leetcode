class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0, p=1;
        while(n){
            int r= n%10;
            n=n/10;
            s+=r;
            p*=r;
        }
        return p-s;
    }
};