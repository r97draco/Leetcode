class Solution {
public:
    // set<int> dp;
    // bool isHappy(int n) {
    //     if(dp.find(n)!=dp.end())return false;
    //     dp.insert(n);
    //     if(n==1)return true;
    //     int sum=0;
    //     while(n!=0){
    //         int r= n%10;
    //         sum+= r*r;
    //         n/=10;
    //     }
    //     return isHappy(sum);
    // }
    
    bool isHappy(int n){
        if(n==1)return 1;
        if(n==89)return 0;
        int sum=0;
        while(n!=0){
            int r= n%10;
            sum+= r*r;
            n/=10;
        }
        return isHappy(sum);
    }
};