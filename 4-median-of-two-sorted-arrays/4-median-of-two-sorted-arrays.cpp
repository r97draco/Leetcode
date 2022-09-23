class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size(), n= nums2.size();
        vector<int> med;
        int sz=m+n;
        double ans=0.0;
        
        int i=0, j=0;
        while(i<m || j<n){
            if(i>=m){
                med.push_back(nums2[j++]);
            }
            else if(j>=n){
                med.push_back(nums1[i++]);
            }
            else if(nums1[i]<=nums2[j]){
                med.push_back(nums1[i++]);
            }
            else {
                med.push_back(nums2[j++]);
            }
        }
        
        for(auto i: med){
            cout<<i<<" ";
        }
        cout<<endl;
        if(sz%2==1){
            ans=med[sz/2];
        }
        else {
            ans = (double)(med[sz/2]+ med[(sz/2)-1])/2;
        }
        return ans;
    }
};