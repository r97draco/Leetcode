class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int sz= intervals.size();
        int i=0;
        while(i < sz && newInterval[0]> intervals[i][1]){
            res.push_back(intervals[i]);
            i++;
        }
        
        while(i < sz && newInterval[1] >= intervals[i][0]){
            newInterval[0]= min(newInterval[0], intervals[i][0]);
            newInterval[1]= max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);
        while(i < sz){
            res.push_back(intervals[i]);
            i++;
        }
        
//         for(int arr=0; arr<intervals.size(); ){
//         // for(auto arr: intervals){
//             int k= intervals[arr][0], l=intervals[arr][1];
//             if(x<k && flag){
//                 vector<int> tmp(2);
//                 tmp[0]=x;
//                 while(y>l && arr<intervals.size()){
//                     arr++;
//                     l=intervals[arr][1];
//                 }
//                 tmp[1]=l;
//                 res.push_back(tmp);
//                 flag=0;
//                 arr++;
//             }
//             else if(x<=l && flag){
//                 vector<int> tmp(2);
//                 tmp[0]=k;
//                 while(y>l && arr<intervals.size()){
//                     arr++;
//                     l=intervals[arr][1];
//                 }
//                 if(y< intervals[arr][0]){
//                     tmp[1]=y;
//                     res.push_back(tmp);
//                     flag=0;
//                 }else {
//                     tmp[1]=l;
//                     res.push_back(tmp);
//                     flag=0;
//                     arr++;
//                 }
//             }
//             else {
//                 if(arr>= intervals.size())continue;
//                 res.push_back(intervals[arr]);
//                 arr++;
//             }
            
//         }
        return res;
    }
};