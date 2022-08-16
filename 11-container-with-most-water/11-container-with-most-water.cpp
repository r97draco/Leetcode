class Solution {
public:
    int maxArea(vector<int>& height) {
        int gmx=-10000;
        int i=0, j= height.size()-1;
        while(i<j){
            if(height[i]<=height[j]){
                int h= min(height[i], height[j]);
                int mx= (j-i) * h;
                gmx= max(mx, gmx);
                i++;
            }
            else if(height[i]>height[j]){
                int h= min(height[i], height[j]);
                int mx= (j-i) * h;
                gmx= max(mx, gmx);
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        
        return gmx;
        
    }
};