class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        if(n%2==1){
            result.push_back(0);
        }
        int i=1;
        n=n/2;
        while(n--){
            result.push_back(i);
            result.push_back(-i);
            i++;
        }
        return result;
    }
};