class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size(), l = 0, r = sz-1;
        int res = 0;
        while(l<r){
            int h = min(height[l], height[r]);
            int w = r-l;
            int currArea = h*w;
            res = max(res,currArea);
            if(height[l] == height[r]){
                l++;
                r--;
            }
            else if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};