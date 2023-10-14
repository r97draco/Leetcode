class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        vector<int> ltr (sz, 1);
        vector<int> rtl (sz, 1);

        for(int i=1; i<sz; i++){
            ltr[i]= ltr[i-1] * nums[i-1];
            cout<< ltr[i]<<" ";
        }
        cout<<endl;
        for(int i=sz-2; i>=0; i--){
            rtl[i]= rtl[i+1] * nums[i+1];
            cout<< rtl[i]<<" ";
        }
        for(int i=0; i<sz; i++){
            ltr[i]= ltr[i]* rtl[i];
        }
        return ltr;
    }
};