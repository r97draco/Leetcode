class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ar = digits;
        reverse(ar.begin(),ar.end());
            int rem = 1;
        for(int i=0; i<ar.size(); i++){
            ar[i]+=rem;
            if(ar[i]<10){
                // rem= 0;
                break;
            }
            while(ar[i]/10!=0){
                rem = ar[i]/10;
                ar[i]=ar[i]%10;
            }
            
        }
        if(ar.back()==0)ar.push_back(1);
        reverse(ar.begin(),ar.end());
        return ar;
    }
};