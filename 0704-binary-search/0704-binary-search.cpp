class Solution {
public:
    int search(vector<int>& a, int target) {
        int l=0, h= a.size()-1, mid;
        while(l<=h){
            mid= l+(h-l)/2;
            if(a[mid]==target)return mid;
            else if(a[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }
};