class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int sz = n.size(); 
        vector<int> lef(sz, 1);
        vector<int> right(sz, 1);
        lef[0]=1; right[sz-1]=1;
        
        for(int i=0; i< sz-1; i++) {
            lef[i+1] = lef[i]*n[i];
        }
        for(int i=sz-1; i>0; i--) {
            right[i-1] = right[i]*n[i];
        }
        
        for(int i=0; i<sz-1 ; i++){
            lef[i]= lef[i]*right[i];
        }
        return lef;
    }
};