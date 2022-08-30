class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // priority_queue<int, vector<int>, greater<int>> pq;
        map<int,int, greater<int>> mp;
        int sz= score.size();
        for(int i=0; i<sz; i++){
            mp.insert({score[i],i});
        }
        
        vector<string> res(sz,"-1");
        int count=1;
        for(auto i: mp){
            switch(count){
                case 1:res[i.second]="Gold Medal";
                    break;
                case 2:res[i.second]="Silver Medal";
                    break;
                case 3:res[i.second]="Bronze Medal";
                    break;
                    
                default :
                    res[i.second]= to_string(count);
            }
            count++;
        }
        return res;
    }
};