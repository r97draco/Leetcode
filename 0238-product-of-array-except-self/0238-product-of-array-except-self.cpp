class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz= nums.size();
        vector<int> pdf(sz, 1), pdb(sz,1);
        for(int i=0; i< sz-1 ; i++){
           pdf[i+1]= pdf[i]* nums[i]; 
        }
        for(int i=sz-1; i>0 ; i--){
           pdb[i-1]= pdb[i]* nums[i]; 
        }
        for(int i=0; i< sz ; i++){
           pdf[i]= pdf[i]* pdb[i]; 
        }
        return pdf;
    }
};