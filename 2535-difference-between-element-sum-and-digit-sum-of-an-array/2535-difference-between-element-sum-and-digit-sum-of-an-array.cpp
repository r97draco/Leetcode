class Solution {
public:
    int sum_of_digits(int n){
        int sum=0;
        while(n!=0){
            int r= n%10;
            n= n/10;
            sum+=r;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
       int esofn =0, dsofn=0;
        for(auto i: nums){
            esofn+=i;
            dsofn+= sum_of_digits(i);
        }
        return esofn-dsofn;
    }
};