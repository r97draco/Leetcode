class Solution {
public:
    int removeElement(vector<int>& A, int val) {
        set<int> un;
        int sz=A.size()-1;
        for(int i=0; i<=sz && sz>=0; i++){
            if(A[i]==val){
                while(A[sz]==val && sz>i){
                    sz--;
                }
                swap(A[i],A[sz--]);
            }
        }
        return sz+1;
    }
};