class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);
        for(auto i: intervals){
            int lastFirst = result.back()[1]; 
            int start= i[0], end=i[1];
            if(lastFirst>= start){
                result.back()[1]= max(lastFirst, end);
            }
            else{
                result.push_back(i);
            }
        }
        return result;
        
    }
};